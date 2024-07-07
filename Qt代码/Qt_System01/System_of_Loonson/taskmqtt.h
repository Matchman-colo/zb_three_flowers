#ifndef TASKMQTT_H
#define TASKMQTT_H

#include "widget.h"

class taskMqtt : public QObject
{
    Q_OBJECT
public:
    explicit taskMqtt(QObject *parent = nullptr);

    QMQTT::Client *mqttClient;
    QString m_strPubTopic, m_strSubTopic;
    void Init_MQTT();


signals:
    void Signal_MqttConnectSuccess();

public slots:
    void Slot_MqttConnectSuccess();

    void TaskSendToCloud();
};

#endif // TASKMQTT_H
