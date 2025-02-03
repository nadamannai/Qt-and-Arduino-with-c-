//#include "mainwindow.h"
#include "loginpage.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    LoginPage L;
   // w.setWindowTitle("Temperature and Humidity Sensor Reading");
    L.setFixedSize(781,451);
    L.show();
   // w.show();
    return a.exec();
}
