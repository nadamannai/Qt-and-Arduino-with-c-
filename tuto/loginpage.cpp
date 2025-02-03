#include "loginpage.h"
#include "ui_loginpage.h"
#include <QDebug>
#include <QMessageBox>

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);

}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButton_clicked()
{
    QString username = ui->lineEdit_name->text();
    QString password = ui->lineEdit_password->text();
    if (username=="ninisaidi"&& password=="23102000" || username=="Nada"&& password=="14032000" || username=="Lallouza"&& password=="31012000" )
    {
        //QMessageBox :: information(this,"Qt App","Loggin Success");
        this->hide();
        MainWindow * pagedeux   = new MainWindow(this);
        pagedeux->show();




    }

    else
    {
        QMessageBox ::warning(this,"QT App","Please enter valid name or psd");
    }

}

