/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(800, 600);
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 221, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 160, 141, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 250, 141, 31));
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(110, 190, 181, 31));
        lineEdit_name->setClearButtonEnabled(false);
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(110, 280, 181, 31));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setClearButtonEnabled(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 100, 171, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-10, 10, 781, 451));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/ress/img.jpeg);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 340, 71, 31));
        LoginPage->setCentralWidget(centralwidget);
        label_5->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_name->raise();
        lineEdit_password->raise();
        label_6->raise();
        pushButton->raise();
        menubar = new QMenuBar(LoginPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        LoginPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginPage);
        statusbar->setObjectName("statusbar");
        LoginPage->setStatusBar(statusbar);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700; color:#55aaff; vertical-align:super;\">Welcome !</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#7a7a7a;\">User Name</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#7a7a7a;\">Password</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_name->setToolTip(QCoreApplication::translate("LoginPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        lineEdit_name->setWhatsThis(QCoreApplication::translate("LoginPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lineEdit_name->setInputMask(QString());
        lineEdit_name->setText(QString());
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("LoginPage", "Enter User Name", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_password->setToolTip(QCoreApplication::translate("LoginPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        lineEdit_password->setWhatsThis(QCoreApplication::translate("LoginPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lineEdit_password->setInputMask(QString());
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("LoginPage", "Enter Password", nullptr));
        label_6->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#55aaff; vertical-align:super;\">Sign In</span></p></body></html>", nullptr));
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("LoginPage", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
