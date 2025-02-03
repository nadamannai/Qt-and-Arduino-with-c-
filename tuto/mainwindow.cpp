#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->temp_lcdNumber->display("-------");
    //ui->hum_lcdNumber->display("-------");
    int ret = A.connect_arduino();
    qDebug()<<"ret = "<<ret;
    //arduino = new QSerialPort(this);
    serialBuffer = "";
    parsed_data = "";
    temperature_value = 0.0;
    humidity_value = 0.0;
    QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(readSerial()));



}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::readSerial()
{
    // Read incoming data and append to the buffer
   //qDebug() << "readyRead() signal received!";
    serialData = A.read_from_arduino();
    qDebug() << "readyRead() signal received!";
    serialBuffer += QString::fromStdString(serialData.toStdString());
    //serialData.clear();

    // Check for a complete message using start (`<`) and end (`>`) markers
    if (serialBuffer.contains('<') && serialBuffer.contains('>')) {
        startIdx = serialBuffer.indexOf('<');
        endIdx = serialBuffer.indexOf('>');

        if (startIdx < endIdx) {
            // Extract the message and clear the buffer
            message = serialBuffer.mid(startIdx + 1, endIdx - startIdx - 1);
            serialBuffer = serialBuffer.mid(endIdx + 1); // Retain remaining data after the parsed message

            // Split the message into temperature and humidity
            values = message.split(',');
            if (values.size() == 2) {
                temperature_value = values[0].toDouble(&tempOk);
                humidity_value = values[1].toDouble(&humOk);

                if (tempOk && humOk) {


                    // Update the UI
                    ui->temp_lcdNumber->display(temperature_value);
                    ui->hum_lcdNumber->display(humidity_value);

                    qDebug() << "Temperature: " << temperature_value << ", Humidity: " << humidity_value;
                } else {
                    qDebug() << "Invalid data received: " << message;
                }
            } else {
                qDebug() << "Malformed message: " << message;
            }
        } else {
            // Handle invalid marker order
            serialBuffer.clear();
            qDebug() << "Invalid data format. Clearing buffer.";
        }
    }
}



