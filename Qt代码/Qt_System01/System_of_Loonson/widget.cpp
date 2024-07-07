#include "widget.h"
#include "ui_widget.h"
#include<iostream>
using namespace std;
/* Part of SerialPort */
QString serialPortReadBuffer;
QStringList serialPortReadList;
QString stringTemp1;
QString stringTemp2;
QString stringTemp3;
QString stringHumi1;
QString stringHumi2;
QString stringHumi3;
QString stringLight1;
QString stringLight2;
QString stringLight3;
QString stringNumber;
QString stringPowder1;
QString stringPowder2;
QString stringPowder3;

QString stringPower1;
QString stringPower2;
QString stringPower3;
qreal nodeNumber;

QChart *chart_nodeOne;
/* Part of Charts */
QSplineSeries *Series_nodeOne_One;
QSplineSeries *Series_nodeOne_Two;
QSplineSeries *Series_nodeOne_Thr;
QSplineSeries *Series_nodeOne_Fou;
QDateTimeAxis *axisX_nodeOne;
QValueAxis *axisY_nodeOne_temp;
QValueAxis *axisY_nodeOne_humi;
QValueAxis *axisY_nodeOne_light;
QValueAxis *axisY_nodeOne_powder;

QChart *chart_nodeTwo;
QSplineSeries *Series_nodeTwo_One;
QSplineSeries *Series_nodeTwo_Two;
QSplineSeries *Series_nodeTwo_Thr;
QSplineSeries *Series_nodeTwo_Fou;
QDateTimeAxis *axisX_nodeTwo;
QValueAxis *axisY_nodeTwo;
QValueAxis *axisY_humi_nodeTwo;
QValueAxis *axisY_light_nodeTwo;
QValueAxis *axisY_powder_nodeTwo;

QChart *chart_nodeThr;
QSplineSeries *Series_nodeThr_One;
QSplineSeries *Series_nodeThr_Two;
QSplineSeries *Series_nodeThr_Thr;
QSplineSeries *Series_nodeThr_Fou;
QDateTimeAxis *axisX_nodeThr;
QValueAxis *axisY_nodeThr;
QValueAxis *axisY_humi_nodeThr;
QValueAxis *axisY_light_nodeThr;
QValueAxis *axisY_powder_nodeThr;

/* Part of CurrentTime */
QDateTime currentDatetime;
QString stringCurrentTime;
QString stringCurrentTimeMessage;

bool state_nodeOne;
bool state_nodeTwo;
bool state_nodeThr;
/* Part of Data */
qreal temp_max;
qreal temp_min;
qreal humi_max;
qreal humi_min;
qreal light_max;
qreal light_min;
qreal temp_compare;
qreal humi_compare;
qreal light_compare;
qreal powder_compare;
qreal power_min;
qreal powder_max;
qreal powder_min;
QString limit;

qreal temp1;
qreal humi1;
qreal light1;
qreal temp2;
qreal humi2;
qreal light2;
qreal temp3;
qreal humi3;
qreal light3;
qreal powder1;
qreal powder2;
qreal powder3;
bool flag1=1;
bool flag2=1;
bool flag3=1;

int power1;
int power2;
int power3;

int node_number;
int node_disnumber = 3;

//unsigned int error_index = 0x0000;
int error1, error2, error3, error4, error5, error6;
int error7, error8, error9, error10, error11, error12;
int error13, error14, error15;
/* Part of UI */
Node1 *nodeOne;
Node2 *nodeTwo;
Node3 *nodeThr;
set *setui;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Part of This */
    QPalette pal = window()->palette();
    pal.setColor(QPalette::Window, QRgb(0xdceaf6));
//    pal.setColor(QPalette::WindowText, QRgb(0xffffff));
    window()->setPalette(pal);
    pal.setColor(QPalette::WindowText, Qt::blue);
    ui->label_time->setPalette(pal);
    QFont ft;
    ft.setPointSize(20);
    ui->label_time->setFont(ft);

    currentDatetime = QDateTime::currentDateTime();
    stringCurrentTime = currentDatetime.toString("yyyy-MM-dd hh:mm:ss ddd");
    stringCurrentTimeMessage = currentDatetime.toString("yyyy-MM-dd hh:mm:ss ");
    ui->label_time->setText(stringCurrentTime);

    /* Part of SerialPort */


    taskSerialPort *mySerialPort = new taskSerialPort;
    threadSerial = new QThread();

    connect(threadSerial, &QThread::started, mySerialPort, &taskSerialPort::Init_SerialPort);
    mySerialPort->moveToThread((threadSerial));
    threadSerial->start();
    connect(mySerialPort, SIGNAL(Signal_SerialPortReadBuffer()), this, SLOT(Slot_SerialPortReadBuffer()));



    /* Part of MQTT */
    taskMqtt *myMqtt = new taskMqtt;
    //threadMqtt = new QThread();
    myMqtt->Init_MQTT();
    //myMqtt->moveToThread(threadMqtt);
    //threadMqtt->start();
    connect(myMqtt, SIGNAL(Signal_MqttConnectSuccess()), this, SLOT(Slot_MqttConnectSuccess()));
    connect(this, &Widget::Signal_SerialPortProcess, myMqtt, &taskMqtt::TaskSendToCloud);

    serialTimer = new QTimer(this);
    connect(serialTimer, SIGNAL(timeout()), this, SLOT(Slot_SerialPortProcess()));




    /* Part of NodeOne */
    nodeOne = new Node1();
    nodeOne->hide();
    connect(nodeOne, SIGNAL(Signal_Return()), this, SLOT(Slot_UIReturn()));
    connect(this, SIGNAL(Signal_CurrentTime()), nodeOne, SLOT(Slot_RefreshTime()));
    connect(nodeOne, SIGNAL(Node1_Safe()),mySerialPort, SLOT(Slot_Node1_SerialSafe()));
    connect(nodeOne, SIGNAL(Node1_Danger()),mySerialPort, SLOT(Slot_Node1_SerialDanger()));

    /* Part of NodeTwo */
    nodeTwo = new Node2();
    nodeTwo->hide();
    connect(nodeTwo, SIGNAL(Signal_Return()), this, SLOT(Slot_UIReturn()));
    connect(this, SIGNAL(Signal_CurrentTime()), nodeTwo, SLOT(Slot_RefreshTime()));
//    connect(nodeTwo, SIGNAL(Node2_Safe()),mySerialPort, SLOT(Slot_Node2_SerialSafe()));
//    connect(nodeTwo, SIGNAL(Node2_Danger()),mySerialPort, SLOT(Slot_Node2_SerialDanger()));


    /* Part of NodeThr */
    nodeThr = new Node3();
    nodeThr->hide();
    connect(nodeThr, SIGNAL(Signal_Return()), this, SLOT(Slot_UIReturn()));
    connect(this, SIGNAL(Signal_CurrentTime()), nodeThr, SLOT(Slot_RefreshTime()));
    connect(nodeThr, SIGNAL(Node3_Safe()),mySerialPort, SLOT(Slot_Node3_SerialSafe()));
    connect(nodeThr, SIGNAL(Node3_Danger()),mySerialPort, SLOT(Slot_Node3_SerialDanger()));


    /* Part of SetUI */
    setui = new set();
    setui->hide();
    connect(setui, SIGNAL(Signal_Return()), this, SLOT(Slot_UIReturn()));
    connect(this, SIGNAL(Signal_CurrentTime()), setui, SLOT(Slot_RefreshTime()));

    /* Part of Timer */
    threadOneSecondTimer = new QThread();
    oneSecondTimer = new QTimer();
    oneSecondTimer->moveToThread(threadOneSecondTimer);
    oneSecondTimer->setInterval(1000);
    threadOneSecondTimer->start();
    connect(threadOneSecondTimer, SIGNAL(started()), oneSecondTimer, SLOT(start()));
    connect(oneSecondTimer, SIGNAL(timeout()), this, SLOT(Slot_OneSecondTimer()));

    /* Part of Warning */
    taskWarning *myWarning = new taskWarning;
    threadWarning = new QThread();
    myWarning->moveToThread(threadWarning);
    threadWarning->start();
    connect(this, &Widget::Signal_SerialPortProcess, myWarning, [=]
    {
        myWarning->TaskWarning();
    });
    connect(myWarning, SIGNAL(Signal_Warning(unsigned int)), this, SLOT(Slot_Warning(unsigned int)));
    connect(myWarning, SIGNAL(Signal_Warning(unsigned int)), nodeOne, SLOT(Slot_Warning(unsigned int)));
    connect(myWarning, SIGNAL(Signal_Warning(unsigned int)), nodeTwo, SLOT(Slot_Warning(unsigned int)));
    connect(myWarning, SIGNAL(Signal_Warning(unsigned int)), nodeThr, SLOT(Slot_Warning(unsigned int)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::Slot_SerialPortReadBuffer()
{
    serialTimer->start(50);
}

void Widget::Slot_SerialPortProcess()
{

    serialTimer->stop();
    serialPortReadList = serialPortReadBuffer.split(",");
    stringNumber = serialPortReadList[0];

    nodeNumber = stringNumber.toDouble();
    if(nodeNumber == 1&&serialPortReadList.size() == 6)
    {
        stringTemp1 = serialPortReadList[1];
        stringHumi1 = serialPortReadList[2];
        stringLight1 = serialPortReadList[3];
        stringPowder1 = serialPortReadList[4];
        temp1 = stringTemp1.toDouble();
        humi1 = stringHumi1.toDouble();
        light1 = stringLight1.toDouble();
        powder1=stringPowder1.toDouble();

//#ifdef power
//        stringPower1 = serialPortReadList[4];
//        power1 = stringPower1.toInt();

//#endif
    }
    else if(nodeNumber == 2&&serialPortReadList.size() == 6)
    {
        stringTemp2 = serialPortReadList[1];
        stringHumi2 = serialPortReadList[2];
        stringLight2 = serialPortReadList[3];
        stringPowder2 = serialPortReadList[4];
        temp2 = stringTemp2.toDouble();
        humi2 = stringHumi2.toDouble();
        light2 = stringLight2.toDouble();
        powder2=stringPowder2.toDouble();
        stringTemp3 = serialPortReadList[1];
        stringHumi3 = serialPortReadList[2];
        stringLight3 = serialPortReadList[3];
        stringPowder3 = serialPortReadList[4];
        temp3 = stringTemp3.toDouble();
        humi3 = stringHumi3.toDouble();
        light3 = stringLight3.toDouble();
        powder3=stringPowder3.toDouble();
//#ifdef power
  //      stringPower2 = serialPortReadList[4];
    //    power2 = stringPower2.toInt();

//#endif
    }
    else if(nodeNumber == 3&&serialPortReadList.size() == 6)
    {
        stringTemp3 = serialPortReadList[1];
        stringHumi3 = serialPortReadList[2];
        stringLight3 = serialPortReadList[3];
        stringPowder3 = serialPortReadList[4];
        temp3 = stringTemp3.toDouble();
        humi3 = stringHumi3.toDouble();
        light3 = stringLight3.toDouble();
        powder3=stringPowder3.toDouble();
//#ifdef power
//        stringPower3 = serialPortReadList[4];
//        power3 = stringPower3.toInt();

//#endif
    }
    serialPortReadBuffer.clear();
    emit Signal_SerialPortProcess();
}

void Widget::Slot_MqttConnectSuccess()
{
    QMessageBox::information(this, "info", "MqttConnectSuccess!!!");
}

qreal puc_Temp[10] = {10.0, 12.0, 16.3, 9.5, 14.6, 11.8, 18.7, 25.6, 22.4, 18.7};
qreal puc_Temp2[10] = {78.0, 66.0, 50.7, 88.5, 75.6, 66.8, 85.7, 64.6, 58.4, 73.7};
qreal puc_Temp3[10] = {21.0, 33.0, 45.3, 27.6, 43.8, 33.5, 22.7, 34.6, 15.4, 36.7};
void Widget::Slot_OneSecondTimer()
{
    currentDatetime = QDateTime::currentDateTime();
    stringCurrentTime = currentDatetime.toString("yyyy-MM-dd hh:mm:ss ddd");
    stringCurrentTimeMessage = currentDatetime.toString("yyyy-MM-dd hh:mm:ss ");

    //设置坐标轴显示范围
    chart_nodeOne->axisX()->setMin(QDateTime::currentDateTime().addSecs(-60 * 1));       //系统当前时间的前一秒
    chart_nodeOne->axisX()->setMax(QDateTime::currentDateTime().addSecs(0));            //系统当前时间
    chart_nodeTwo->axisX()->setMin(QDateTime::currentDateTime().addSecs(-60 * 1));       //系统当前时间的前一秒
    chart_nodeTwo->axisX()->setMax(QDateTime::currentDateTime().addSecs(0));            //系统当前时间
    chart_nodeThr->axisX()->setMin(QDateTime::currentDateTime().addSecs(-60 * 1));       //系统当前时间的前一秒
    chart_nodeThr->axisX()->setMax(QDateTime::currentDateTime().addSecs(0));            //系统当前时间
//    Series_nodeOne_One->append(currentDatetime.toMSecsSinceEpoch(), temp1);
#ifdef test
    static int i = 0;
    temp1 = puc_Temp[i];
    temp2 = puc_Temp[i];
    temp3 = 10;
    humi1 = puc_Temp2[i];
    humi2 = puc_Temp2[i];
    humi3 = 10;
    light1 = puc_Temp3[i];
    light2 = puc_Temp3[i];
    light3 = 10;
    serialPortReadBuffer.clear();
    Series_nodeOne_One->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp[i]);
    Series_nodeOne_Two->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp2[i]);
    Series_nodeOne_Thr->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp3[i]);
    Series_nodeTwo_One->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp[i]);
    Series_nodeTwo_Two->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp2[i]);
    Series_nodeTwo_Thr->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp3[i]);
    Series_nodeThr_One->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp[i]);
    Series_nodeThr_Two->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp2[i]);
    Series_nodeThr_Thr->append(currentDatetime.toMSecsSinceEpoch(), puc_Temp3[i]);
    i++;
    i %= 10;
#else
    if(state_nodeOne)
    {
        Series_nodeOne_One->append(currentDatetime.toMSecsSinceEpoch(), temp1);
        Series_nodeOne_Two->append(currentDatetime.toMSecsSinceEpoch(), humi1);
        Series_nodeOne_Thr->append(currentDatetime.toMSecsSinceEpoch(), light1);
        Series_nodeOne_Fou->append(currentDatetime.toMSecsSinceEpoch(), powder1);
    }
    if(state_nodeTwo)
    {
        Series_nodeTwo_One->append(currentDatetime.toMSecsSinceEpoch(), temp2);
        Series_nodeTwo_Two->append(currentDatetime.toMSecsSinceEpoch(), humi2);
        Series_nodeTwo_Thr->append(currentDatetime.toMSecsSinceEpoch(), light2);
        Series_nodeTwo_Fou->append(currentDatetime.toMSecsSinceEpoch(), powder2);
    }
    if(state_nodeThr)
    {
        Series_nodeThr_One->append(currentDatetime.toMSecsSinceEpoch(), temp3);
        Series_nodeThr_Two->append(currentDatetime.toMSecsSinceEpoch(), humi3);
        Series_nodeThr_Thr->append(currentDatetime.toMSecsSinceEpoch(), light3);
        Series_nodeThr_Fou->append(currentDatetime.toMSecsSinceEpoch(), powder3);
    }
#endif
    ui->label_time->setText(stringCurrentTime);
    emit Signal_CurrentTime();
//    emit Signal_SerialPortProcess();
}

void Widget::Slot_Warning(unsigned int error_index)
{
    // pic change
    if(state_nodeOne)
    {
        if((error_index & 0x01) || (error_index & 0x02) || (error_index & 0x04)||(error_index & 0x1000))
        {
            ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/pic/NodeOneRed.png);border:none;color:rgb(255,255,255);}");
        }
        else
        {
            ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/pic/NodeOneBlue.png);border:none;color:rgb(255,255,255);}");
        }
    }
    else
    {
        ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/pic/NodeOneBlack.png);border:none;color:rgb(255,255,255);}");
    }
    if(state_nodeTwo)
    {
        if((error_index & 0x08) || (error_index & 0x10) || (error_index & 0x20)||(error_index & 0x2000))
        {
            ui->pushButton_2->setStyleSheet("QPushButton{border-image: url(:/pic/NodeTwoRed.png);border:none;color:rgb(255,255,255);}");
        }
        else
        {
            ui->pushButton_2->setStyleSheet("QPushButton{border-image: url(:/pic/NodeTwoBlue.png);border:none;color:rgb(255,255,255);}");
        }
    }
    else
    {
        ui->pushButton_2->setStyleSheet("QPushButton{border-image: url(:/pic/NodeTwoBlack.png);border:none;color:rgb(255,255,255);}");
    }
    if(state_nodeThr)
    {
        if((error_index & 0x40) || (error_index & 0x80) || (error_index & 0x100)||(error_index & 0x4000))
        {
            ui->pushButton_3->setStyleSheet("QPushButton{border-image: url(:/pic/NodeThrRed.png);border:none;color:rgb(255,255,255);}");
        }
        else
        {
            ui->pushButton_3->setStyleSheet("QPushButton{border-image: url(:/pic/NodeThrBlue.png);border:none;color:rgb(255,255,255);}");
        }
    }
    else
    {
        ui->pushButton_3->setStyleSheet("QPushButton{border-image: url(:/pic/NodeThrBlack.png);border:none;color:rgb(255,255,255);}");
    }
}

void Widget::Slot_UIReturn()
{
    nodeOne->hide();
    nodeTwo->hide();
    nodeThr->hide();
    setui->hide();
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->pushButton_4->show();
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->widget->show();
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->widget->hide();
    nodeOne->setGeometry(this->geometry());
    nodeOne->show();
}

void Widget::on_pushButton_2_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->widget->hide();
    nodeTwo->setGeometry(this->geometry());
    nodeTwo->show();
}

void Widget::on_pushButton_3_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->widget->hide();
    nodeThr->setGeometry(this->geometry());
    nodeThr->show();
}

void Widget::on_pushButton_4_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->widget->hide();
    setui->setGeometry(this->geometry());
    setui->show();
}
