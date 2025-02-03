#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QByteArray>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void readSerial();
   // void updateTemperature(QString);
   // void updateHumidity(QString);

private:
    Ui::MainWindow *ui;
    Arduino A;
    QString serialData;
    QString parsed_data;
    QString serialBuffer;
    QString message;
    QStringList values;
    bool tempOk, humOk;
    double temperature_value;
    double humidity_value;
    int startIdx;
    int endIdx;
};
#endif // MAINWINDOW_H
