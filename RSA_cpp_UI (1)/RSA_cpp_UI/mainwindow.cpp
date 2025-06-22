#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <ctime>
#include <cstdlib>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QFileDialog>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    srand(time(0));

    ui->textEditSend->setReadOnly(false);
    ui->textEditReceive->setReadOnly(false);
    ui->textEditEncrypted->setReadOnly(true);
    ui->textEditDecrypted->setReadOnly(true);
    ui->lineEditSignatureReceived->setReadOnly(false);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_generateKeysButton_clicked() {
    bool okP, okQ;
    int p = ui->lineEditP->text().toInt(&okP);
    int q = ui->lineEditQ->text().toInt(&okQ);
    if (!okP || !okQ || !kiemTraNguyenTo(p) || !kiemTraNguyenTo(q) || p == q) {
        QMessageBox::warning(this, "Lỗi", "p và q phải là số nguyên tố khác nhau và hợp lệ.");
        return;
    }
    n = p * q;
    int phi = (p - 1) * (q - 1);
    do { e = rand() % (phi - 2) + 2; } while (gcd(e, phi) != 1);
    d = modInverse(e, phi);
    ui->lineEditE->setText(QString::number(e));
    ui->lineEditN->setText(QString::number(n));
    ui->lineEditD->setText(QString::number(d));
    ui->lineEditNPrivate->setText(QString::number(n));
}

void MainWindow::on_encryptButton_clicked() {
    std::string message = ui->textEditSend->toPlainText().toStdString();
    if (message.empty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập văn bản hoặc chọn file.");
        return;
    }
    if (e == 0 || n == 0) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng tạo khóa trước khi mã hóa.");
        return;
    }
    std::string encrypted = encryptMessage(message, e, n);
    ui->textEditEncrypted->setText(QString::fromStdString(encrypted));
}

void MainWindow::on_createSignatureButton_clicked() {
    std::string message = ui->textEditSend->toPlainText().toStdString();
    if (message.empty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập văn bản hoặc chọn file.");
        return;
    }
    if (d == 0 || n == 0) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng tạo khóa trước khi tạo chữ ký.");
        return;
    }
    originalMessage = message;
    long long signature = createSignature(message, d, n);
    ui->lineEditSignature->setText(QString::number(signature));
}

void MainWindow::on_verifySignatureButton_clicked() {
    std::string receivedMessage = ui->textEditReceive->toPlainText().toStdString();
    std::string signatureStr = ui->lineEditSignatureReceived->text().toStdString();
    if (receivedMessage.empty() || signatureStr.empty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập văn bản và chữ ký.");
        return;
    }
    if (e == 0 || n == 0) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng tạo khóa trước khi xác minh.");
        return;
    }
    if (originalMessage.empty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng lưu văn bản gốc trước.");
        return;
    }
    long long signature;
    try {
        signature = std::stoll(signatureStr);
    } catch (const std::exception&) {
        QMessageBox::warning(this, "Lỗi", "Chữ ký không hợp lệ, vui lòng nhập số nguyên.");
        return;
    }
    bool textChanged, signatureChanged;
    bool isValid = verifySignature(receivedMessage, signature, e, n, textChanged, signatureChanged);
    if (isValid) {
        ui->textEditDecrypted->setText(QString::fromStdString(originalMessage));
        QMessageBox::information(this, "Xác nhận", "Chữ ký hợp lệ! Văn bản không bị thay đổi.");
    } else {
        ui->textEditDecrypted->setText("Không hợp lệ");
        if (textChanged && signatureChanged) {
            QMessageBox::warning(this, "Cảnh báo", "Văn bản và chữ ký đã bị thay đổi!");
        } else if (textChanged) {
            QMessageBox::warning(this, "Cảnh báo", "Văn bản đã bị thay đổi!");
        } else if (signatureChanged) {
            QMessageBox::warning(this, "Cảnh báo", "Chữ ký đã bị thay đổi!");
        }
    }
}

void MainWindow::on_saveButton_clicked() {
    std::string message = ui->textEditSend->toPlainText().toStdString();
    if (message.empty()) {
        QMessageBox::warning(this, "Lỗi", "Không có văn bản để lưu.");
        return;
    }
    QString fileName = QFileDialog::getSaveFileName(this, "Lưu Văn bản gốc", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << QString::fromStdString(message);
            file.close();
            originalMessage = message;
            QMessageBox::information(this, "Thông báo", "Văn bản gốc đã được lưu thành công.");
        } else {
            QMessageBox::warning(this, "Lỗi", "Không thể lưu file.");
        }
    }
}

void MainWindow::on_resetButton_clicked() {
    ui->textEditSend->clear();
    ui->textEditEncrypted->clear();
    ui->textEditReceive->clear();
    ui->textEditDecrypted->clear();
    ui->lineEditP->clear();
    ui->lineEditQ->clear();
    ui->lineEditE->setText("");
    ui->lineEditN->setText("");
    ui->lineEditD->setText("");
    ui->lineEditNPrivate->setText("");
    ui->lineEditSignature->clear();
    ui->lineEditSignatureReceived->clear();
    n = 0; e = 0; d = 0;
    originalMessage.clear();
}

void MainWindow::on_exitButton_clicked() {
    close();
}

void MainWindow::on_selectFileSendButton_clicked() {
    qDebug() << "Select file send button clicked";
    QString fileName = QFileDialog::getOpenFileName(this, "Chọn file", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            ui->textEditSend->setText(in.readAll());
            file.close();
        } else {
            QMessageBox::warning(this, "Lỗi", "Không thể mở file.");
        }
    }
}

void MainWindow::on_selectFileReceiveButton_clicked() {
    qDebug() << "Select file receive button clicked";
    QString fileName = QFileDialog::getOpenFileName(this, "Chọn file", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            ui->textEditReceive->setText(in.readAll());
            file.close();
        } else {
            QMessageBox::warning(this, "Lỗi", "Không thể mở file.");
        }
    }
}

void MainWindow::on_exportSignatureButton_clicked() {
    QString signature = ui->lineEditSignature->text();
    if (signature.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Chưa có chữ ký để xuất.");
        return;
    }
    QString fileName = QFileDialog::getSaveFileName(this, "Xuất chữ ký", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << signature;
            file.close();
            QMessageBox::information(this, "Thành công", "Đã xuất chữ ký.");
        } else {
            QMessageBox::warning(this, "Lỗi", "Không thể lưu file.");
        }
    }
}

void MainWindow::on_importSignatureButton_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, "Import chữ ký", "", "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString signature = in.readAll().trimmed();
            ui->lineEditSignatureReceived->setText(signature);
            file.close();
            QMessageBox::information(this, "Thành công", "Đã import chữ ký.");
        } else {
            QMessageBox::warning(this, "Lỗi", "Không thể mở file.");
        }
    }
}

int MainWindow::hamBam(const std::string &str) {
    const int MOD = 1e9 + 7;
    int hash = 0;
    for (char c : str) {
        hash = (1LL * hash * 256 + static_cast<unsigned char>(c)) % MOD;
    }
    return hash;
}

bool MainWindow::kiemTraNguyenTo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int MainWindow::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int MainWindow::euclid_extend(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int GCD = euclid_extend(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return GCD;
}

int MainWindow::modInverse(int a, int m) {
    int x, y;
    int g = euclid_extend(a, m, x, y);
    if (g != 1) return -1;
    else return (x % m + m) % m;
}

void MainWindow::generateRSAKeys(int &n, int &e, int &d) {
    srand(time(0));
    int p, q;
    do { p = rand() % 1000 + 500; } while (!kiemTraNguyenTo(p));
    do { q = rand() % 1000 + 500; } while (!kiemTraNguyenTo(q) || q == p);
    n = p * q;
    int phi = (p - 1) * (q - 1);
    do { e = rand() % (phi - 2) + 2; } while (gcd(e, phi) != 1);
    d = modInverse(e, phi);
}

long long MainWindow::modularPow(long long base, int exp, int mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

std::string MainWindow::encryptMessage(const std::string &message, int e, int n) {
    std::stringstream result;
    for (char c : message) {
        long long charValue = static_cast<unsigned char>(c);
        long long encrypted = modularPow(charValue, e, n);
        result << encrypted << " ";
    }
    return result.str().substr(0, result.str().length() - 1);
}

long long MainWindow::createSignature(const std::string &message, int d, int n) {
    int hash = hamBam(message);
    return modularPow(hash, d, n);
}

bool MainWindow::verifySignature(const std::string &receivedMessage, long long signature, int e, int n, bool &textChanged, bool &signatureChanged) {
    int receivedHash = hamBam(receivedMessage);
    long long decryptedHash = modularPow(signature, e, n); // Giải mã chữ ký
    int originalHash = hamBam(originalMessage); // Lấy hash gốc
    qDebug() << "Received Hash:" << receivedHash << "Decrypted Hash:" << decryptedHash << "Original Hash:" << originalHash;

    textChanged = (receivedHash != originalHash);
    signatureChanged = ((decryptedHash % n) != (originalHash % n));
    return (!textChanged && !signatureChanged);
}
