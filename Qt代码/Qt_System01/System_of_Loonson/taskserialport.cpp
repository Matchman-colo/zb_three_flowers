#include "taskserialport.h"
#include "taskserialport.h"

taskSerialPort::taskSerialPort(QObject *parent) : QObject(parent)
{

}

void taskSerialPort::Init_SerialPort()
{
    //搜索设备上所有串口
    //
    QList<QSerialPortInfo> serialPortInfo = QSerialPortInfo::availablePorts();
    if(serialPortInfo.isEmpty())
    {
        // 显示警告信息或者处理没有串行端口的情况
        // QMessageBox::warning(this, "Warning", "No serial ports available!!!");
        return;
    }

    // 确保索引不会超出范围
    int index = 2; // 假设你想使用第三个串行端口（索引从0开始）
    if(index >= serialPortInfo.size())
    {
        // 索引超出范围，可以调整索引或者显示错误
        // QMessageBox::warning(this, "Warning", "Index out of range for serial ports!!!");
        index = 0; // 或者你可以设置为列表中的第一个串行端口
    }

    serialPort = new QSerialPort;
    serialPort->setPort(serialPortInfo[0]); // 使用安全的索引
    // ... 其余代码保持不变 ...
    serialPort->open(QIODevice::ReadWrite);
    serialPort->setBaudRate(QSerialPort::Baud115200);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    connect(serialPort, SIGNAL(readyRead()), this, SLOT(Slot_SerialPortReadBuffer()));
\



//    serialTimer = new QTimer();
//    connect(serialTimer, SIGNAL(timeout()), this, SLOT(Slot_SerialPortProcess()));
}

void taskSerialPort::Slot_SerialPortReadBuffer()
{

    serialPortReadBuffer.append(serialPort->readAll());

      emit Signal_SerialPortReadBuffer();

}

void taskSerialPort::Slot_Node1_SerialDanger()
{
    serialPort->write("1ybj");
}
void taskSerialPort::Slot_Node1_SerialSafe()
{
    serialPort->write("1nbj");
}

void taskSerialPort::Slot_Node2_SerialDanger()
{
    serialPort->write("2ybj");
}
void taskSerialPort::Slot_Node2_SerialSafe()
{
    serialPort->write("2nbj");
}

void taskSerialPort::Slot_Node3_SerialDanger()
{
    serialPort->write("3ybj");
}
void taskSerialPort::Slot_Node3_SerialSafe()
{
    serialPort->write("3nbj");
}
