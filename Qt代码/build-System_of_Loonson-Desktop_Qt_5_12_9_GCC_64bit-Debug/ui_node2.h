/********************************************************************************
** Form generated from reading UI file 'node2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODE2_H
#define UI_NODE2_H

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

class Ui_Node2
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit_log;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit_temp;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *textEdit_humi;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_light;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QTextEdit *textEdit_powder;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_71;
    QWidget *widget;
    QWidget *layoutWidget5;
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
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_return;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_time;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_data;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Node2)
    {
        if (Node2->objectName().isEmpty())
            Node2->setObjectName(QString::fromUtf8("Node2"));
        Node2->resize(1260, 974);
        layoutWidget = new QWidget(Node2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 16, 16));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(Node2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 100, 600, 800));
        widget_2->setMinimumSize(QSize(600, 800));
        widget_2->setMaximumSize(QSize(600, 800));
        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 182, 738));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit_log = new QTextEdit(layoutWidget1);
        textEdit_log->setObjectName(QString::fromUtf8("textEdit_log"));
        textEdit_log->setMinimumSize(QSize(180, 700));
        textEdit_log->setMaximumSize(QSize(180, 700));
        textEdit_log->setReadOnly(true);

        verticalLayout->addWidget(textEdit_log);

        layoutWidget2 = new QWidget(widget_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(200, 0, 372, 340));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        textEdit_temp = new QTextEdit(layoutWidget2);
        textEdit_temp->setObjectName(QString::fromUtf8("textEdit_temp"));
        textEdit_temp->setMinimumSize(QSize(180, 300));
        textEdit_temp->setMaximumSize(QSize(180, 300));
        textEdit_temp->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_temp);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        textEdit_humi = new QTextEdit(layoutWidget2);
        textEdit_humi->setObjectName(QString::fromUtf8("textEdit_humi"));
        textEdit_humi->setMinimumSize(QSize(180, 300));
        textEdit_humi->setMaximumSize(QSize(180, 300));
        textEdit_humi->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_humi);


        horizontalLayout_4->addLayout(verticalLayout_3);

        layoutWidget3 = new QWidget(widget_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(200, 350, 372, 340));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        textEdit_light = new QTextEdit(layoutWidget3);
        textEdit_light->setObjectName(QString::fromUtf8("textEdit_light"));
        textEdit_light->setMinimumSize(QSize(180, 300));
        textEdit_light->setMaximumSize(QSize(180, 300));
        textEdit_light->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_light);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        verticalLayout_8->addWidget(label_8);

        textEdit_powder = new QTextEdit(layoutWidget3);
        textEdit_powder->setObjectName(QString::fromUtf8("textEdit_powder"));
        textEdit_powder->setMinimumSize(QSize(180, 300));
        textEdit_powder->setMaximumSize(QSize(180, 300));

        verticalLayout_8->addWidget(textEdit_powder);


        horizontalLayout_5->addLayout(verticalLayout_8);

        layoutWidget4 = new QWidget(Node2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(590, 10, 631, 801));
        verticalLayout_71 = new QVBoxLayout(layoutWidget4);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        layoutWidget5 = new QWidget(widget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(-2, 0, 631, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_temp = new QPushButton(layoutWidget5);
        pushButton_temp->setObjectName(QString::fromUtf8("pushButton_temp"));
        pushButton_temp->setMinimumSize(QSize(70, 70));
        pushButton_temp->setMaximumSize(QSize(70, 70));
        pushButton_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        horizontalLayout_3->addWidget(pushButton_temp);

        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_humi = new QPushButton(layoutWidget5);
        pushButton_humi->setObjectName(QString::fromUtf8("pushButton_humi"));
        pushButton_humi->setMinimumSize(QSize(70, 70));
        pushButton_humi->setMaximumSize(QSize(70, 70));
        pushButton_humi->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));

        horizontalLayout_3->addWidget(pushButton_humi);

        horizontalSpacer_7 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_light = new QPushButton(layoutWidget5);
        pushButton_light->setObjectName(QString::fromUtf8("pushButton_light"));
        pushButton_light->setMinimumSize(QSize(70, 70));
        pushButton_light->setMaximumSize(QSize(70, 70));
        pushButton_light->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));

        horizontalLayout_3->addWidget(pushButton_light);

        horizontalSpacer_8 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        pushButton_powder = new QPushButton(layoutWidget5);
        pushButton_powder->setObjectName(QString::fromUtf8("pushButton_powder"));
        pushButton_powder->setMinimumSize(QSize(70, 70));
        pushButton_powder->setMaximumSize(QSize(70, 70));
        pushButton_powder->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);"));

        horizontalLayout_3->addWidget(pushButton_powder);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout_71->addWidget(widget);

        graphicsView = new QChartView(layoutWidget4);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_71->addWidget(graphicsView);

        layoutWidget6 = new QWidget(Node2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 10, 571, 82));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_return = new QPushButton(layoutWidget6);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setMinimumSize(QSize(80, 80));
        pushButton_return->setMaximumSize(QSize(80, 80));
        pushButton_return->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Return.png);"));

        horizontalLayout_2->addWidget(pushButton_return);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 80));
        label_5->setMaximumSize(QSize(80, 80));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/NodeTwoBlue.png);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_time = new QLabel(layoutWidget6);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMinimumSize(QSize(200, 0));
        label_time->setMaximumSize(QSize(200, 16777215));
        label_time->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_time);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_data = new QPushButton(layoutWidget6);
        pushButton_data->setObjectName(QString::fromUtf8("pushButton_data"));
        pushButton_data->setMinimumSize(QSize(40, 40));
        pushButton_data->setMaximumSize(QSize(40, 40));
        pushButton_data->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Outputdata.png);"));

        horizontalLayout->addWidget(pushButton_data);

        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_5);


        retranslateUi(Node2);

        QMetaObject::connectSlotsByName(Node2);
    } // setupUi

    void retranslateUi(QWidget *Node2)
    {
        Node2->setWindowTitle(QApplication::translate("Node2", "Form", nullptr));
        label->setText(QApplication::translate("Node2", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#aa0000;\">\350\212\202\347\202\271\346\227\245\345\277\227</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Node2", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff5500;\">\346\270\251\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Node2", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0055ff;\">\346\271\277\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Node2", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff00ff;\">\345\205\211\347\205\247\345\200\274</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Node2", "                   \346\260\224\345\216\213\345\200\274", nullptr));
        pushButton_temp->setText(QApplication::translate("Node2", "\346\270\251\345\272\246\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_humi->setText(QApplication::translate("Node2", "\346\271\277\345\272\246\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_light->setText(QApplication::translate("Node2", "\345\205\211\347\205\247\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_powder->setText(QApplication::translate("Node2", "\346\260\224\345\216\213\n"
"\346\233\262\347\272\277", nullptr));
        pushButton_return->setText(QString());
        label_5->setText(QApplication::translate("Node2", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_time->setText(QString());
        pushButton_data->setText(QString());
        label_7->setText(QApplication::translate("Node2", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\346\215\256\345\257\274\345\207\272</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Node2: public Ui_Node2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODE2_H
