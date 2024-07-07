/********************************************************************************
** Form generated from reading UI file 'node1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODE1_H
#define UI_NODE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_Node1
{
public:
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTextEdit *textEdit_temp;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *textEdit_humi;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_light;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QTextEdit *textEdit_powder;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit_log;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_return;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_time;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_data;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_temp;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_humi;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_light;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_powder;
    QSpacerItem *horizontalSpacer_8;
    QChartView *graphicsView;

    void setupUi(QWidget *Node1)
    {
        if (Node1->objectName().isEmpty())
            Node1->setObjectName(QString::fromUtf8("Node1"));
        Node1->resize(1063, 818);
        Node1->setMinimumSize(QSize(80, 280));
        horizontalLayout_7 = new QHBoxLayout(Node1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        widget_2 = new QWidget(Node1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(600, 800));
        widget_2->setMaximumSize(QSize(600, 800));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(221, 91, 372, 320));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        textEdit_temp = new QTextEdit(layoutWidget);
        textEdit_temp->setObjectName(QString::fromUtf8("textEdit_temp"));
        textEdit_temp->setMinimumSize(QSize(180, 280));
        textEdit_temp->setMaximumSize(QSize(180, 280));
        textEdit_temp->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_temp);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        textEdit_humi = new QTextEdit(layoutWidget);
        textEdit_humi->setObjectName(QString::fromUtf8("textEdit_humi"));
        textEdit_humi->setMinimumSize(QSize(180, 280));
        textEdit_humi->setMaximumSize(QSize(180, 280));
        textEdit_humi->setReadOnly(true);

        verticalLayout->addWidget(textEdit_humi);


        horizontalLayout_4->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(221, 415, 372, 340));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        textEdit_light = new QTextEdit(layoutWidget1);
        textEdit_light->setObjectName(QString::fromUtf8("textEdit_light"));
        textEdit_light->setMinimumSize(QSize(180, 300));
        textEdit_light->setMaximumSize(QSize(180, 300));
        textEdit_light->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_light);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        verticalLayout_6->addWidget(label_8);

        textEdit_powder = new QTextEdit(layoutWidget1);
        textEdit_powder->setObjectName(QString::fromUtf8("textEdit_powder"));
        textEdit_powder->setMinimumSize(QSize(180, 300));
        textEdit_powder->setMaximumSize(QSize(180, 300));

        verticalLayout_6->addWidget(textEdit_powder);


        horizontalLayout_5->addLayout(verticalLayout_6);

        layoutWidget2 = new QWidget(widget_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 90, 202, 738));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        textEdit_log = new QTextEdit(layoutWidget2);
        textEdit_log->setObjectName(QString::fromUtf8("textEdit_log"));
        textEdit_log->setMinimumSize(QSize(180, 700));
        textEdit_log->setMaximumSize(QSize(200, 700));
        textEdit_log->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_log);

        layoutWidget3 = new QWidget(widget_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(1, 1, 591, 82));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_return = new QPushButton(layoutWidget3);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setMinimumSize(QSize(80, 80));
        pushButton_return->setMaximumSize(QSize(80, 80));
        pushButton_return->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Return.png);"));

        horizontalLayout_3->addWidget(pushButton_return);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 80));
        label_5->setMaximumSize(QSize(80, 80));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/NodeOneBlue.png);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_9 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_time = new QLabel(layoutWidget3);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMinimumSize(QSize(200, 0));
        label_time->setMaximumSize(QSize(200, 16777215));
        label_time->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_time);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_data = new QPushButton(layoutWidget3);
        pushButton_data->setObjectName(QString::fromUtf8("pushButton_data"));
        pushButton_data->setMinimumSize(QSize(40, 40));
        pushButton_data->setMaximumSize(QSize(40, 40));
        pushButton_data->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Outputdata.png);"));

        horizontalLayout->addWidget(pushButton_data);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_7->addWidget(widget_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(Node1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(9, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButton_temp = new QPushButton(widget);
        pushButton_temp->setObjectName(QString::fromUtf8("pushButton_temp"));
        pushButton_temp->setMinimumSize(QSize(70, 70));
        pushButton_temp->setMaximumSize(QSize(70, 70));
        pushButton_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);"));

        horizontalLayout_6->addWidget(pushButton_temp);

        horizontalSpacer_5 = new QSpacerItem(11, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        pushButton_humi = new QPushButton(widget);
        pushButton_humi->setObjectName(QString::fromUtf8("pushButton_humi"));
        pushButton_humi->setMinimumSize(QSize(70, 70));
        pushButton_humi->setMaximumSize(QSize(70, 70));
        pushButton_humi->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 240, 164);"));

        horizontalLayout_6->addWidget(pushButton_humi);

        horizontalSpacer_3 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pushButton_light = new QPushButton(widget);
        pushButton_light->setObjectName(QString::fromUtf8("pushButton_light"));
        pushButton_light->setMinimumSize(QSize(70, 70));
        pushButton_light->setMaximumSize(QSize(70, 70));
        pushButton_light->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));

        horizontalLayout_6->addWidget(pushButton_light);

        horizontalSpacer_7 = new QSpacerItem(16, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        pushButton_powder = new QPushButton(widget);
        pushButton_powder->setObjectName(QString::fromUtf8("pushButton_powder"));
        pushButton_powder->setMinimumSize(QSize(70, 70));
        pushButton_powder->setMaximumSize(QSize(70, 70));
        pushButton_powder->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));

        horizontalLayout_6->addWidget(pushButton_powder);

        horizontalSpacer_8 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        graphicsView = new QChartView(Node1);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout_3->addWidget(graphicsView, 2, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_3);


        retranslateUi(Node1);

        QMetaObject::connectSlotsByName(Node1);
    } // setupUi

    void retranslateUi(QWidget *Node1)
    {
        Node1->setWindowTitle(QApplication::translate("Node1", "Form", nullptr));
        label_2->setText(QApplication::translate("Node1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff5500;\">\346\270\251\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Node1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0055ff;\">\346\271\277\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Node1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff00ff;\">\345\205\211\347\205\247\345\200\274</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Node1", "                  \346\260\224\345\216\213\345\200\274", nullptr));
        label->setText(QApplication::translate("Node1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#aa0000;\">\350\212\202\347\202\271\346\227\245\345\277\227</span></p></body></html>", nullptr));
        pushButton_return->setText(QString());
        label_5->setText(QApplication::translate("Node1", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_time->setText(QString());
        pushButton_data->setText(QString());
        label_7->setText(QApplication::translate("Node1", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\346\215\256\345\257\274\345\207\272</span></p></body></html>", nullptr));
        pushButton_temp->setText(QApplication::translate("Node1", "\346\270\251\345\272\246\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_humi->setText(QApplication::translate("Node1", "\346\271\277\345\272\246\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_light->setText(QApplication::translate("Node1", "\345\205\211\347\205\247\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_powder->setText(QApplication::translate("Node1", "\346\260\224\345\216\213\n"
"\346\233\262\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Node1: public Ui_Node1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODE1_H
