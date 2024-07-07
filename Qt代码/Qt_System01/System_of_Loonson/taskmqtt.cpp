#include "taskmqtt.h"
#include<iostream>
taskMqtt::taskMqtt(QObject *parent) : QObject(parent)
{

}
int i = 0;
void taskMqtt::TaskSendToCloud()
{
#ifdef test
    QString mqttMessage;
    qreal a = puc_Temp[i];
    qreal b = puc_Temp2[i];
    qreal c = puc_Temp3[i];
    i++;
    i %= 10;
    /* MQTT Process */
    stringPower1 = "22.0";
    stringPower2 = "10.0";
    stringPower3 = "15.0";
    mqttMessage = "{'id': '14', 'params':{'NodeOne_Temp': " + QString::number(a) + \
            ",'NodeOne_Humi': " + QString::number(b) + ",'NodeOne_Light': " + QString::number(c) + \
            ",'NodeTwo_Temp': " + QString::number(a) + ",'NodeTwo_Humi': " + QString::number(b) + \
            ",'NodeTwo_Light': " + QString::number(c) + ",'NodeThr_Temp': " + QString::number(a) + \
            ",'NodeThr_Humi': " + QString::number(b) + ",'NodeThr_Light': " + QString::number(c) + \
            ",'Node_Number': " + QString::number(node_number) + ",'Node_DisNumber': " + QString::number(node_disnumber) + \
            ",'NodeOne_Power': " + stringPower1 + ",'NodeTwo_Power': " + stringPower2 + ",'NodeThr_Power': " + stringPower3 + \
            ",'Error1': " + QString::number(error1) + ",'Error2': " + QString::number(error2) + ",'Error3': " + QString::number(error3) + \
            ",'Error4': " + QString::number(error4) + ",'Error5': " + QString::number(error5) + ",'Error6': " + QString::number(error6) + \
            ",'Error7': " + QString::number(error7) + ",'Error8': " + QString::number(error8) + ",'Error9': " + QString::number(error9) + \
            ",'Error10': " + QString::number(error10) + ",'Error11': " + QString::number(error11) + ",'Error12': " + QString::number(error12) + "}}";
    QMQTT::Message send_msg(136, m_strPubTopic, mqttMessage.toLocal8Bit(),0);
    mqttClient->publish(send_msg);
#else
    QString mqttMessage;
    /* MQTT Process */
    mqttMessage = "{'id': '14', 'params':{  'NodeOne_Temp': " + stringTemp1 + \
            ",'NodeOne_Humi': " + stringHumi1 + ",'NodeOne_Light': " + stringLight1 + ",'NodeOne_Powder': " + stringPowder1 + \
            ",'NodeTwo_Temp': " + stringTemp2 + ",'NodeTwo_Humi': " + stringHumi2 + \
            ",'NodeTwo_Light': " + stringLight2 + ",'NodeTwo_Powder': " + stringPowder2 + ",'NodeThr_Temp': " + stringTemp3 + \
            ",'NodeThr_Humi': " + stringHumi3 + ",'NodeThr_Light': " + stringLight3 + ",'NodeThr_Powder': " + stringPowder3 + "}}"; //+ \
            ",'Node_Number': " + QString::number(node_number) + ",'Node_DisNumber': " + QString::number(node_disnumber) + \
            ",'Error1': " + QString::number(error1) + ",'Error2': " + QString::number(error2) + ",'Error3': " + QString::number(error3) + \
            ",'Error4': " + QString::number(error4) + ",'Error5': " + QString::number(error5) + ",'Error6': " + QString::number(error6) + \
            ",'Error7': " + QString::number(error7) + ",'Error8': " + QString::number(error8) + ",'Error9': " + QString::number(error9) + \
            ",'Error13': " + QString::number(error13) + ",'Error14': " + QString::number(error14) + ",'Error15': " + QString::number(error15) + "}}";
    QMQTT::Message send_msg(136, m_strPubTopic, mqttMessage.toLocal8Bit(),0);
    mqttClient->publish(send_msg);

#endif
}
void taskMqtt::Init_MQTT()
{
    mqttClient = new QMQTT::Client;

    /* 需要跟阿里云Iot平台一致 */

    QString m_strProductKey = "k1cbj9NcO6v";
    QString m_strDeviceName = "Device1";
    QString m_strDeviceSecret = "c94aec7dbe2320cf85038e8c230899c9";
    QString m_strRegionId = "cn-shanghai";
    QString m_strHostName = m_strProductKey + ".iot-as-mqtt." + m_strRegionId + ".aliyuncs.com";
    m_strPubTopic = "/sys/k1cbj9NcO6v/Device1/thing/event/property/post";
    m_strSubTopic = "/sys/k1cbj9NcO6v/Device1/thing/service/property/set";

    QString clientId="ts1234";      // - 最好是设备的Mac地址
    QString signmethod = "hmacsha1";
    QString timestamp ="789";       // - 当前时间毫秒值
    QString message ="clientId"+clientId+"deviceName"+m_strDeviceName+"productKey"+m_strProductKey+"timestamp"+timestamp;

    mqttClient->setHostName(m_strHostName);        // - 设置域名
    mqttClient->setPort(1883);//设置端口
    mqttClient->setUsername(m_strDeviceName + "&" + m_strProductKey);
    mqttClient->setClientId(clientId + "|securemode=3,signmethod=" + signmethod + ",timestamp="+timestamp+ "|");
    mqttClient->setPassword(QMessageAuthenticationCode::hash(message.toLocal8Bit(), m_strDeviceSecret.toLocal8Bit(), QCryptographicHash::Sha1).toHex());
    mqttClient->setKeepAlive(700);//保活心跳时间取值范围为30秒~1200秒。如果心跳时间不在此区间内，阿里云物联网平台会拒绝连接
    /* 绑定槽函数 */
    connect(mqttClient, SIGNAL(connected()), this, SLOT(Slot_MqttConnectSuccess())); // - 连接成功

    /* 连接mqtt服务器 */
    mqttClient->connectToHost();
}


void taskMqtt::Slot_MqttConnectSuccess()
{
    emit Signal_MqttConnectSuccess();
}
