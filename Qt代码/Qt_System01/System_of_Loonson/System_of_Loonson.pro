#-------------------------------------------------
#
# Project created by QtCreator 2023-07-11T15:18:16
#
#-------------------------------------------------

QT       += core gui
QT += network serialport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS += -std=c++11

TARGET = System_of_Loonson
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mqtt/qmqtt_client.cpp \
    mqtt/qmqtt_client_p.cpp \
    mqtt/qmqtt_frame.cpp \
    mqtt/qmqtt_message.cpp \
    mqtt/qmqtt_network.cpp \
    mqtt/qmqtt_router.cpp \
    mqtt/qmqtt_routesubscription.cpp \
    mqtt/qmqtt_socket.cpp \
    mqtt/qmqtt_ssl_socket.cpp \
    mqtt/qmqtt_timer.cpp \
    mqtt/qmqtt_websocket.cpp \
    mqtt/qmqtt_websocketiodevice.cpp \
    taskmqtt.cpp \
    taskserialport.cpp \
    node1.cpp \
    node2.cpp \
    node3.cpp \
    taskwarning.cpp \
    set.cpp

HEADERS  += widget.h \
    mqtt/qmqtt.h \
    mqtt/qmqtt_client.h \
    mqtt/qmqtt_client_p.h \
    mqtt/qmqtt_frame.h \
    mqtt/qmqtt_global.h \
    mqtt/qmqtt_message.h \
    mqtt/qmqtt_message_p.h \
    mqtt/qmqtt_network_p.h \
    mqtt/qmqtt_networkinterface.h \
    mqtt/qmqtt_routedmessage.h \
    mqtt/qmqtt_router.h \
    mqtt/qmqtt_routesubscription.h \
    mqtt/qmqtt_socket_p.h \
    mqtt/qmqtt_socketinterface.h \
    mqtt/qmqtt_ssl_socket_p.h \
    mqtt/qmqtt_timer_p.h \
    mqtt/qmqtt_timerinterface.h \
    mqtt/qmqtt_websocket_p.h \
    mqtt/qmqtt_websocketiodevice_p.h \
    taskmqtt.h \
    taskserialport.h \
    node1.h \
    node2.h \
    node3.h \
    taskwarning.h \
    set.h

FORMS    += widget.ui \
    node1.ui \
    node2.ui \
    node3.ui \
    set.ui

SUBDIRS += \
    mqtt/qmqtt.pro

DISTFILES += \
    mqtt/qmqtt.pri \
    mqtt/qmqtt.qbs

RESOURCES += \
    pic.qrc
