/********************************************************************************
** Form generated from reading UI file 'node3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODE3_H
#define UI_NODE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_Node3
{
public:
    QWidget *widget_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QTextEdit *textEdit_log;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit_temp;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *textEdit_humi;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTextEdit *textEdit_light;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QTextEdit *textEdit_powder;
    QWidget *widget;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_temp;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_humi;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_light;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_powder;
    QSpacerItem *horizontalSpacer_10;
    QChartView *graphicsView;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_7;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_return;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_time;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_data;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_10;

    void setupUi(QWidget *Node3)
    {
        if (Node3->objectName().isEmpty())
            Node3->setObjectName(QString::fromUtf8("Node3"));
        Node3->resize(1093, 943);
        widget_2 = new QWidget(Node3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(9, 71, 600, 800));
        widget_2->setMinimumSize(QSize(600, 800));
        widget_2->setMaximumSize(QSize(600, 800));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 182, 751));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        textEdit_log = new QTextEdit(layoutWidget);
        textEdit_log->setObjectName(QString::fromUtf8("textEdit_log"));
        textEdit_log->setMinimumSize(QSize(180, 700));
        textEdit_log->setMaximumSize(QSize(180, 700));
        textEdit_log->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_log);

        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 30, 372, 340));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        textEdit_temp = new QTextEdit(layoutWidget1);
        textEdit_temp->setObjectName(QString::fromUtf8("textEdit_temp"));
        textEdit_temp->setMinimumSize(QSize(180, 300));
        textEdit_temp->setMaximumSize(QSize(180, 300));
        textEdit_temp->setReadOnly(true);

        verticalLayout->addWidget(textEdit_temp);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        textEdit_humi = new QTextEdit(layoutWidget1);
        textEdit_humi->setObjectName(QString::fromUtf8("textEdit_humi"));
        textEdit_humi->setMinimumSize(QSize(180, 300));
        textEdit_humi->setMaximumSize(QSize(180, 300));
        textEdit_humi->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_humi);


        horizontalLayout_4->addLayout(verticalLayout_3);

        layoutWidget2 = new QWidget(widget_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(200, 380, 372, 340));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        textEdit_light = new QTextEdit(layoutWidget2);
        textEdit_light->setObjectName(QString::fromUtf8("textEdit_light"));
        textEdit_light->setMinimumSize(QSize(180, 300));
        textEdit_light->setMaximumSize(QSize(180, 300));
        textEdit_light->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_light);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setMaximumSize(QSize(16777215, 30));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        verticalLayout_6->addWidget(label_8);

        textEdit_powder = new QTextEdit(layoutWidget2);
        textEdit_powder->setObjectName(QString::fromUtf8("textEdit_powder"));
        textEdit_powder->setMinimumSize(QSize(180, 300));
        textEdit_powder->setMaximumSize(QSize(180, 300));

        verticalLayout_6->addWidget(textEdit_powder);


        horizontalLayout_5->addLayout(verticalLayout_6);

        widget = new QWidget(Node3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(616, 10, 467, 80));
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(-20, 0, 521, 81));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(18, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_temp = new QPushButton(layoutWidget3);
        pushButton_temp->setObjectName(QString::fromUtf8("pushButton_temp"));
        pushButton_temp->setMinimumSize(QSize(70, 70));
        pushButton_temp->setMaximumSize(QSize(70, 70));
        pushButton_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        horizontalLayout_3->addWidget(pushButton_temp);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_humi = new QPushButton(layoutWidget3);
        pushButton_humi->setObjectName(QString::fromUtf8("pushButton_humi"));
        pushButton_humi->setMinimumSize(QSize(70, 70));
        pushButton_humi->setMaximumSize(QSize(70, 70));
        pushButton_humi->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));

        horizontalLayout_3->addWidget(pushButton_humi);

        horizontalSpacer_7 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_light = new QPushButton(layoutWidget3);
        pushButton_light->setObjectName(QString::fromUtf8("pushButton_light"));
        pushButton_light->setMinimumSize(QSize(70, 70));
        pushButton_light->setMaximumSize(QSize(70, 70));
        pushButton_light->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));

        horizontalLayout_3->addWidget(pushButton_light);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        pushButton_powder = new QPushButton(layoutWidget3);
        pushButton_powder->setObjectName(QString::fromUtf8("pushButton_powder"));
        pushButton_powder->setMinimumSize(QSize(70, 70));
        pushButton_powder->setMaximumSize(QSize(70, 70));
        pushButton_powder->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 194, 126);"));

        horizontalLayout_3->addWidget(pushButton_powder);

        horizontalSpacer_10 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        graphicsView = new QChartView(Node3);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(590, 90, 619, 713));
        graphicsView->setMinimumSize(QSize(619, 713));
        graphicsView->setMaximumSize(QSize(619, 713));
        layoutWidget4 = new QWidget(Node3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_7 = new QVBoxLayout(layoutWidget4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        layoutWidget5 = new QWidget(Node3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 571, 82));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_return = new QPushButton(layoutWidget5);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setMinimumSize(QSize(80, 80));
        pushButton_return->setMaximumSize(QSize(80, 80));
        pushButton_return->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Return.png);"));

        horizontalLayout_2->addWidget(pushButton_return);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 80));
        label_5->setMaximumSize(QSize(80, 80));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/NodeThrBlue.png);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        horizontalLayout_2->addLayout(verticalLayout_8);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_time = new QLabel(layoutWidget5);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMinimumSize(QSize(200, 0));
        label_time->setMaximumSize(QSize(200, 16777215));
        label_time->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_time);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_data = new QPushButton(layoutWidget5);
        pushButton_data->setObjectName(QString::fromUtf8("pushButton_data"));
        pushButton_data->setMinimumSize(QSize(40, 40));
        pushButton_data->setMaximumSize(QSize(40, 40));
        pushButton_data->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Outputdata.png);"));

        horizontalLayout->addWidget(pushButton_data);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_5);

        widget1 = new QWidget(Node3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_9 = new QVBoxLayout(widget1);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(Node3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_10 = new QVBoxLayout(widget2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Node3);

        QMetaObject::connectSlotsByName(Node3);
    } // setupUi

    void retranslateUi(QWidget *Node3)
    {
        Node3->setWindowTitle(QApplication::translate("Node3", "Form", nullptr));
        label->setText(QApplication::translate("Node3", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#aa0000;\">\350\212\202\347\202\271\346\227\245\345\277\227</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Node3", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff5500;\">\346\270\251\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Node3", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0055ff;\">\346\271\277\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Node3", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff00ff;\">\345\205\211\347\205\247\345\200\274</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Node3", "                   \347\262\211\345\260\230\345\200\274", nullptr));
        pushButton_temp->setText(QApplication::translate("Node3", "\346\270\251\345\272\246\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_humi->setText(QApplication::translate("Node3", "\346\271\277\345\272\246\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_light->setText(QApplication::translate("Node3", "\345\205\211\347\205\247\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_powder->setText(QApplication::translate("Node3", "\347\262\211\345\260\230\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_return->setText(QString());
        label_5->setText(QApplication::translate("Node3", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_time->setText(QString());
        pushButton_data->setText(QString());
        label_7->setText(QApplication::translate("Node3", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\346\215\256\345\257\274\345\207\272</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Node3: public Ui_Node3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODE3_H
