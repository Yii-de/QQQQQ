/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditNPrivate;
    QLineEdit *lineEditN;
    QLabel *label_3;
    QPushButton *selectFileSendButton;
    QLabel *label_7;
    QLineEdit *lineEditP;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_5;
    QPushButton *verifySignatureButton;
    QLabel *label_15;
    QPushButton *resetButton;
    QPushButton *generateKeysButton;
    QPushButton *exitButton;
    QPushButton *createSignatureButton;
    QLineEdit *lineEditQ;
    QTextEdit *textEditEncrypted;
    QPushButton *selectFileReceiveButton;
    QLabel *label_4;
    QTextEdit *textEditDecrypted;
    QLabel *label_6;
    QLabel *label_12;
    QLineEdit *lineEditE;
    QPushButton *saveButton;
    QLineEdit *lineEditD;
    QLabel *label;
    QLabel *label_10;
    QTextEdit *textEditSend;
    QTextEdit *textEditReceive;
    QLineEdit *lineEditSignature;
    QPushButton *encryptButton;
    QLabel *label_17;
    QLineEdit *lineEditSignatureReceived;
    QFrame *line;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QPushButton *exportSignatureButton;
    QPushButton *importSignatureButton;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1326, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEditNPrivate = new QLineEdit(centralwidget);
        lineEditNPrivate->setObjectName("lineEditNPrivate");
        lineEditNPrivate->setGeometry(QRect(170, 240, 151, 26));
        lineEditN = new QLineEdit(centralwidget);
        lineEditN->setObjectName("lineEditN");
        lineEditN->setGeometry(QRect(170, 170, 151, 26));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 270, 63, 20));
        selectFileSendButton = new QPushButton(centralwidget);
        selectFileSendButton->setObjectName("selectFileSendButton");
        selectFileSendButton->setGeometry(QRect(690, 60, 93, 29));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 60, 91, 20));
        lineEditP = new QLineEdit(centralwidget);
        lineEditP->setObjectName("lineEditP");
        lineEditP->setEnabled(true);
        lineEditP->setGeometry(QRect(170, 60, 151, 26));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 150, 131, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 60, 63, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 90, 91, 20));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 220, 131, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 60, 63, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(150, 170, 63, 20));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(150, 240, 63, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(910, 60, 63, 20));
        verifySignatureButton = new QPushButton(centralwidget);
        verifySignatureButton->setObjectName("verifySignatureButton");
        verifySignatureButton->setGeometry(QRect(1020, 348, 111, 51));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(150, 210, 63, 20));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(560, 450, 93, 29));
        generateKeysButton = new QPushButton(centralwidget);
        generateKeysButton->setObjectName("generateKeysButton");
        generateKeysButton->setGeometry(QRect(120, 308, 111, 51));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(690, 450, 93, 29));
        createSignatureButton = new QPushButton(centralwidget);
        createSignatureButton->setObjectName("createSignatureButton");
        createSignatureButton->setGeometry(QRect(570, 160, 93, 29));
        lineEditQ = new QLineEdit(centralwidget);
        lineEditQ->setObjectName("lineEditQ");
        lineEditQ->setGeometry(QRect(170, 90, 151, 26));
        textEditEncrypted = new QTextEdit(centralwidget);
        textEditEncrypted->setObjectName("textEditEncrypted");
        textEditEncrypted->setGeometry(QRect(540, 240, 141, 91));
        selectFileReceiveButton = new QPushButton(centralwidget);
        selectFileReceiveButton->setObjectName("selectFileReceiveButton");
        selectFileReceiveButton->setGeometry(QRect(1130, 60, 93, 29));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1030, 30, 63, 20));
        textEditDecrypted = new QTextEdit(centralwidget);
        textEditDecrypted->setObjectName("textEditDecrypted");
        textEditDecrypted->setGeometry(QRect(980, 230, 141, 91));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(910, 230, 63, 20));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(150, 140, 63, 20));
        lineEditE = new QLineEdit(centralwidget);
        lineEditE->setObjectName("lineEditE");
        lineEditE->setGeometry(QRect(170, 140, 151, 26));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(690, 120, 91, 29));
        lineEditD = new QLineEdit(centralwidget);
        lineEditD->setObjectName("lineEditD");
        lineEditD->setGeometry(QRect(170, 210, 151, 26));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(590, 30, 63, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(150, 90, 63, 20));
        textEditSend = new QTextEdit(centralwidget);
        textEditSend->setObjectName("textEditSend");
        textEditSend->setGeometry(QRect(540, 60, 141, 91));
        textEditReceive = new QTextEdit(centralwidget);
        textEditReceive->setObjectName("textEditReceive");
        textEditReceive->setGeometry(QRect(980, 60, 141, 91));
        lineEditSignature = new QLineEdit(centralwidget);
        lineEditSignature->setObjectName("lineEditSignature");
        lineEditSignature->setEnabled(true);
        lineEditSignature->setGeometry(QRect(540, 200, 141, 26));
        encryptButton = new QPushButton(centralwidget);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setGeometry(QRect(570, 348, 111, 51));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(910, 170, 63, 20));
        lineEditSignatureReceived = new QLineEdit(centralwidget);
        lineEditSignatureReceived->setObjectName("lineEditSignatureReceived");
        lineEditSignatureReceived->setEnabled(true);
        lineEditSignatureReceived->setGeometry(QRect(980, 170, 141, 31));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 20, 20, 361));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(10, 370, 341, 20));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(340, 20, 20, 361));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(10, 10, 341, 20));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(430, 20, 20, 401));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(780, 20, 20, 401));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(880, 20, 20, 401));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(1240, 20, 20, 401));
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(440, 410, 351, 20));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(440, 10, 351, 20));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(890, 10, 361, 20));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        line_12 = new QFrame(centralwidget);
        line_12->setObjectName("line_12");
        line_12->setGeometry(QRect(890, 410, 361, 20));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);
        exportSignatureButton = new QPushButton(centralwidget);
        exportSignatureButton->setObjectName("exportSignatureButton");
        exportSignatureButton->setGeometry(QRect(690, 200, 91, 31));
        importSignatureButton = new QPushButton(centralwidget);
        importSignatureButton->setObjectName("importSignatureButton");
        importSignatureButton->setGeometry(QRect(1130, 170, 91, 31));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(470, 200, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1326, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B\341\272\243n m\303\243", nullptr));
        selectFileSendButton->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\215n file", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 nguy\303\252n t\341\273\221 ", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Kho\303\241 c\303\264ng khai (e,n)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "p=", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 nguy\303\252n t\341\273\221", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Kho\303\241 b\303\255 m\341\272\255t (d,n)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "V\304\203n b\341\272\243n", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "n=", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "n=", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "V\304\203n b\341\272\243n", nullptr));
        verifySignatureButton->setText(QCoreApplication::translate("MainWindow", "X\303\241c nh\341\272\255n", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "d=", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        generateKeysButton->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o kho\303\241", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
        createSignatureButton->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o ch\341\273\257 k\303\275", nullptr));
        selectFileReceiveButton->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\215n file", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Gia\314\211i ma\314\203", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "B\341\272\243n r\303\265", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "e=", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "L\306\260u", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ma\314\203 ho\314\201a", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "q=", nullptr));
        encryptButton->setText(QCoreApplication::translate("MainWindow", "M\303\243 ho\303\241", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\257 k\303\275", nullptr));
        exportSignatureButton->setText(QCoreApplication::translate("MainWindow", "Xu\341\272\245t ch\341\273\257 k\303\275", nullptr));
        importSignatureButton->setText(QCoreApplication::translate("MainWindow", "Import ch\341\273\257 k\303\275", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Ch\306\260\314\203 ky\314\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
