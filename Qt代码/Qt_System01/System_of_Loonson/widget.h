#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mqtt/qmqtt.h"
#include <QMessageAuthenticationCode>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include <QMessageBox>
#include <QThread>
#include <QPalette>
#include <QtCharts/QChart>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QChartView>
#include <QDateTimeAxis>
#include <QValueAxis>
#include <QFont>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include "taskmqtt.h"
#include "taskserialport.h"
#include "taskwarning.h"
#include "node1.h"
#include "node2.h"
#include "node3.h"
#include "set.h"

#define MAX_X       9
#define MAX_Y       39
#define MAX_Y_HUMI  99
#define MAX_Y_LIGHT 499
#define MAX_Y_POWDER 150

//#define test
#define power

QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

//    QThread *threadMqtt;
    QThread *threadSerial;
    QThread *threadMqtt;
    QThread *threadOneSecondTimer;
    QThread *threadWarning;

    QTimer *serialTimer;
    QTimer *oneSecondTimer;

signals:
    void Signal_SerialPortProcess();

    void Signal_CurrentTime();

private slots:
    void on_pushButton_clicked();

    void Slot_SerialPortReadBuffer();

    void Slot_SerialPortProcess();

    void Slot_MqttConnectSuccess();

    void Slot_UIReturn();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void Slot_OneSecondTimer();

    void Slot_Warning(unsigned int error_index);

    void on_pushButton_4_clicked();

private:
    Ui::Widget *ui;
};

extern QString serialPortReadBuffer;
extern QStringList serialPortReadList;
extern QString stringTemp1;
extern QString stringTemp2;
extern QString stringTemp3;
extern QString stringHumi1;
extern QString stringHumi2;
extern QString stringHumi3;
extern QString stringLight1;
extern QString stringLight2;
extern QString stringLight3;
extern QString stringPowder1;
extern QString stringPowder2;
extern QString stringPowder3;
extern QString stringNumber;

extern qreal nodeNumber;
extern QChart *chart_nodeOne;
extern QSplineSeries *Series_nodeOne_One;
extern QSplineSeries *Series_nodeOne_Two;
extern QSplineSeries *Series_nodeOne_Thr;
extern QSplineSeries *Series_nodeOne_Fou;
extern QDateTimeAxis *axisX_nodeOne;
extern QValueAxis *axisY_nodeOne_temp;
extern QValueAxis *axisY_nodeOne_humi;
extern QValueAxis *axisY_nodeOne_light;
extern QValueAxis *axisY_nodeOne_powder;

extern QChart *chart_nodeTwo;
extern QSplineSeries *Series_nodeTwo_One;
extern QSplineSeries *Series_nodeTwo_Two;
extern QSplineSeries *Series_nodeTwo_Thr;
extern QSplineSeries *Series_nodeTwo_Fou;
extern QDateTimeAxis *axisX_nodeTwo;
extern QValueAxis *axisY_nodeTwo;
extern QValueAxis *axisY_humi_nodeTwo;
extern QValueAxis *axisY_light_nodeTwo;
extern QValueAxis *axisY_powder_nodeTwo;


extern QChart *chart_nodeThr;
extern QSplineSeries *Series_nodeThr_One;
extern QSplineSeries *Series_nodeThr_Two;
extern QSplineSeries *Series_nodeThr_Thr;
extern QSplineSeries *Series_nodeThr_Fou;
extern QDateTimeAxis *axisX_nodeThr;
extern QValueAxis *axisY_nodeThr;
extern QValueAxis *axisY_humi_nodeThr;
extern QValueAxis *axisY_light_nodeThr;
extern QValueAxis *axisY_powder_nodeThr;

extern QDateTime currentDatetime;
extern QString stringCurrentTime;
extern QString stringCurrentTimeMessage;

extern bool state_nodeOne;
extern bool state_nodeTwo;
extern bool state_nodeThr;
extern bool flag1;
extern bool flag2;
extern bool flag3;

extern qreal temp_max;
extern qreal temp_min;
extern qreal humi_max;
extern qreal humi_min;
extern qreal light_max;
extern qreal light_min;
extern qreal powder_max;
extern qreal powder_min;
extern QString limit;

extern qreal temp_compare;
extern qreal humi_compare;
extern qreal light_compare;
extern qreal powder_compare;
extern qreal power_min;

extern qreal temp1;
extern qreal humi1;
extern qreal light1;
extern qreal powder1;

extern qreal temp2;
extern qreal humi2;
extern qreal light2;
extern qreal powder2;

extern qreal temp3;
extern qreal humi3;
extern qreal light3;
extern qreal powder3;
//extern unsigned int error_index;
extern qreal puc_Temp[10];
extern qreal puc_Temp2[10];
extern qreal puc_Temp3[10];
extern int power1;
extern int power2;
extern int power3;
extern QString stringPower1;
extern QString stringPower2;
extern QString stringPower3;
extern int node_number;
extern int node_disnumber;
extern int error1, error2, error3, error4, error5, error6;
extern int error7, error8, error9, error10, error11, error12;
extern int error13, error14, error15;
#endif // WIDGET_H
