#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateKeysButton_clicked();
    void on_createSignatureButton_clicked();
    void on_encryptButton_clicked();
    void on_verifySignatureButton_clicked();
    void on_saveButton_clicked();
    void on_resetButton_clicked();
    void on_exitButton_clicked();
    void on_selectFileSendButton_clicked();
    void on_selectFileReceiveButton_clicked();
    void on_exportSignatureButton_clicked();
    void on_importSignatureButton_clicked();

private:
    Ui::MainWindow *ui;
    int n, e, d;
    std::string originalMessage; // Lưu văn bản gốc

    int hamBam(const std::string &str);
    bool kiemTraNguyenTo(int n);
    int gcd(int a, int b);
    int euclid_extend(int a, int b, int &x, int &y);
    int modInverse(int a, int m);
    void generateRSAKeys(int &n, int &e, int &d);
    long long modularPow(long long base, int exp, int mod);
    std::string encryptMessage(const std::string &message, int e, int n);
    long long createSignature(const std::string &message, int d, int n);
    bool verifySignature(const std::string &receivedMessage, long long signature, int e, int n, bool &textChanged, bool &signatureChanged);
};

#endif // MAINWINDOW_H
