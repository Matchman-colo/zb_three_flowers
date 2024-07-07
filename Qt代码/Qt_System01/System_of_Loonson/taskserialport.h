#ifndef TASKSERIALPORT_H
#define TASKSERIALPORT_H

#include "widget.h"

class taskSerialPort : public QObject
{
    Q_OBJECT
public:
    explicit taskSerialPort(QObject *parent = nullptr);


    QSerialPort *serialPort;
    void Init_SerialPort();


signals:
    void Signal_SerialPortReadBuffer();

public slots:
    void Slot_SerialPortReadBuffer();
    void Slot_Node1_SerialDanger();
     void Slot_Node1_SerialSafe();
     void Slot_Node2_SerialDanger();
     void Slot_Node2_SerialSafe();

     void Slot_Node3_SerialDanger();
     void Slot_Node3_SerialSafe();

//    void Slot_SerialPortProcess();
};

#endif // TASKSERIALPORT_H
