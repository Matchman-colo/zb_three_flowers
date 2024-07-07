/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_time;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget;
    QLabel *label_15;
    QLabel *label_19;
    QLabel *label_11;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_9;
    QDoubleSpinBox *doubleSpinBox_tempCompare;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBox_tempMax;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *doubleSpinBox_tempMin;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_10;
    QDoubleSpinBox *doubleSpinBox_humiCompare;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QDoubleSpinBox *doubleSpinBox_humiMax;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QDoubleSpinBox *doubleSpinBox_humiMin;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_4;
    QDoubleSpinBox *doubleSpinBox_powderCompare;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_22;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_10;
    QDoubleSpinBox *doubleSpinBox_powderMax;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_11;
    QDoubleSpinBox *doubleSpinBox_powderMin;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_11;
    QDoubleSpinBox *doubleSpinBox_lightCompare;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *doubleSpinBox_lightMax;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_9;
    QDoubleSpinBox *doubleSpinBox_lightMin;

    void setupUi(QWidget *set)
    {
        if (set->objectName().isEmpty())
            set->setObjectName(QString::fromUtf8("set"));
        set->resize(902, 1227);
        layoutWidget = new QWidget(set);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 501, 82));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 80));
        pushButton->setMaximumSize(QSize(80, 80));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/Return.png);"));

        horizontalLayout_11->addWidget(pushButton);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        label_time = new QLabel(layoutWidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_time);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        horizontalLayout_11->addLayout(horizontalLayout_10);

        widget = new QWidget(set);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 80, 1000, 800));
        widget->setMinimumSize(QSize(1000, 800));
        widget->setMaximumSize(QSize(1000, 800));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(130, 420, 67, 17));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(400, 440, 67, 17));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(96, 10, 126, 32));
        label_11->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 40, 827, 541));
        verticalLayout_10 = new QVBoxLayout(layoutWidget1);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_12);

        verticalSpacer_9 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        doubleSpinBox_tempCompare = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_tempCompare->setObjectName(QString::fromUtf8("doubleSpinBox_tempCompare"));
        doubleSpinBox_tempCompare->setAlignment(Qt::AlignCenter);
        doubleSpinBox_tempCompare->setDecimals(1);
        doubleSpinBox_tempCompare->setValue(30.000000000000000);

        verticalLayout_4->addWidget(doubleSpinBox_tempCompare);


        horizontalLayout_13->addLayout(verticalLayout_4);

        horizontalSpacer_15 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 100));
        label_3->setMaximumSize(QSize(100, 100));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/SetTemp.png);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        doubleSpinBox_tempMax = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_tempMax->setObjectName(QString::fromUtf8("doubleSpinBox_tempMax"));
        doubleSpinBox_tempMax->setAlignment(Qt::AlignCenter);
        doubleSpinBox_tempMax->setDecimals(1);
        doubleSpinBox_tempMax->setValue(80.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_tempMax);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        doubleSpinBox_tempMin = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_tempMin->setObjectName(QString::fromUtf8("doubleSpinBox_tempMin"));
        doubleSpinBox_tempMin->setAlignment(Qt::AlignCenter);
        doubleSpinBox_tempMin->setDecimals(1);
        doubleSpinBox_tempMin->setValue(10.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_tempMin);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_13->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_13);

        verticalSpacer_10 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_10);

        doubleSpinBox_humiCompare = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_humiCompare->setObjectName(QString::fromUtf8("doubleSpinBox_humiCompare"));
        doubleSpinBox_humiCompare->setAlignment(Qt::AlignCenter);
        doubleSpinBox_humiCompare->setDecimals(1);
        doubleSpinBox_humiCompare->setValue(30.000000000000000);

        verticalLayout_6->addWidget(doubleSpinBox_humiCompare);


        horizontalLayout_14->addLayout(verticalLayout_6);

        horizontalSpacer_16 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 100));
        label_4->setMaximumSize(QSize(100, 100));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/SetHumi.png);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        doubleSpinBox_humiMax = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_humiMax->setObjectName(QString::fromUtf8("doubleSpinBox_humiMax"));
        doubleSpinBox_humiMax->setAlignment(Qt::AlignCenter);
        doubleSpinBox_humiMax->setDecimals(1);
        doubleSpinBox_humiMax->setValue(80.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_humiMax);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        doubleSpinBox_humiMin = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_humiMin->setObjectName(QString::fromUtf8("doubleSpinBox_humiMin"));
        doubleSpinBox_humiMin->setAlignment(Qt::AlignCenter);
        doubleSpinBox_humiMin->setDecimals(1);
        doubleSpinBox_humiMin->setValue(10.000000000000000);

        horizontalLayout_6->addWidget(doubleSpinBox_humiMin);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_14->addLayout(horizontalLayout_4);


        verticalLayout_10->addLayout(horizontalLayout_14);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(116, 24));
        label_17->setMaximumSize(QSize(116, 24));

        verticalLayout_5->addWidget(label_17);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        doubleSpinBox_powderCompare = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_powderCompare->setObjectName(QString::fromUtf8("doubleSpinBox_powderCompare"));
        doubleSpinBox_powderCompare->setMinimumSize(QSize(116, 24));
        doubleSpinBox_powderCompare->setMaximumSize(QSize(116, 24));
        doubleSpinBox_powderCompare->setValue(20.000000000000000);

        verticalLayout_5->addWidget(doubleSpinBox_powderCompare);


        horizontalLayout_18->addLayout(verticalLayout_5);

        horizontalSpacer_20 = new QSpacerItem(330, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_20);

        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(100, 100));
        label_22->setMaximumSize(QSize(100, 100));
        label_22->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/SetPowder.jpg);"));

        horizontalLayout_18->addWidget(label_22);

        horizontalSpacer_22 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_22);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_12->addWidget(label_21);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        doubleSpinBox_powderMax = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_powderMax->setObjectName(QString::fromUtf8("doubleSpinBox_powderMax"));
        doubleSpinBox_powderMax->setMinimumSize(QSize(63, 26));
        doubleSpinBox_powderMax->setMaximumSize(QSize(63, 26));
        doubleSpinBox_powderMax->setMaximum(101.989999999999995);
        doubleSpinBox_powderMax->setValue(50.000000000000000);

        horizontalLayout_12->addWidget(doubleSpinBox_powderMax);


        verticalLayout_9->addLayout(horizontalLayout_12);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_17->addWidget(label_20);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_11);

        doubleSpinBox_powderMin = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_powderMin->setObjectName(QString::fromUtf8("doubleSpinBox_powderMin"));
        doubleSpinBox_powderMin->setValue(10.000000000000000);

        horizontalLayout_17->addWidget(doubleSpinBox_powderMin);


        verticalLayout_9->addLayout(horizontalLayout_17);


        horizontalLayout_18->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_18);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_14);

        verticalSpacer_11 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_11);

        doubleSpinBox_lightCompare = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_lightCompare->setObjectName(QString::fromUtf8("doubleSpinBox_lightCompare"));
        doubleSpinBox_lightCompare->setAlignment(Qt::AlignCenter);
        doubleSpinBox_lightCompare->setDecimals(1);
        doubleSpinBox_lightCompare->setMaximum(1000.000000000000000);
        doubleSpinBox_lightCompare->setValue(100.000000000000000);

        verticalLayout_7->addWidget(doubleSpinBox_lightCompare);


        horizontalLayout_15->addLayout(verticalLayout_7);

        horizontalSpacer_17 = new QSpacerItem(340, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_17);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 100));
        label_7->setMaximumSize(QSize(100, 100));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/SetLight.png);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        doubleSpinBox_lightMax = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_lightMax->setObjectName(QString::fromUtf8("doubleSpinBox_lightMax"));
        doubleSpinBox_lightMax->setMinimumSize(QSize(63, 26));
        doubleSpinBox_lightMax->setMaximumSize(QSize(63, 26));
        doubleSpinBox_lightMax->setAlignment(Qt::AlignCenter);
        doubleSpinBox_lightMax->setDecimals(1);
        doubleSpinBox_lightMax->setMaximum(1000.000000000000000);
        doubleSpinBox_lightMax->setValue(700.000000000000000);

        horizontalLayout_8->addWidget(doubleSpinBox_lightMax);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        doubleSpinBox_lightMin = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_lightMin->setObjectName(QString::fromUtf8("doubleSpinBox_lightMin"));
        doubleSpinBox_lightMin->setAlignment(Qt::AlignCenter);
        doubleSpinBox_lightMin->setDecimals(1);
        doubleSpinBox_lightMin->setMaximum(1000.000000000000000);
        doubleSpinBox_lightMin->setValue(10.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBox_lightMin);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_7->addLayout(verticalLayout_3);


        horizontalLayout_15->addLayout(horizontalLayout_7);


        verticalLayout_10->addLayout(horizontalLayout_15);


        retranslateUi(set);

        QMetaObject::connectSlotsByName(set);
    } // setupUi

    void retranslateUi(QWidget *set)
    {
        set->setWindowTitle(QApplication::translate("set", "Form", nullptr));
        pushButton->setText(QString());
        label_10->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\350\256\276\347\275\256\347\225\214\351\235\242</span></p></body></html>", nullptr));
        label_time->setText(QString());
        label_15->setText(QString());
        label_19->setText(QString());
        label_11->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\346\225\260\346\215\256\350\214\203\345\233\264\350\256\276\347\275\256</span></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\270\251\345\272\246\345\274\202\345\270\270\346\257\224\350\276\203\345\200\274</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_tempCompare->setPrefix(QString());
        label_3->setText(QString());
        label->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\270\251\345\272\246\345\200\274\344\270\212\351\231\220</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_tempMax->setPrefix(QString());
        label_2->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\270\251\345\272\246\345\200\274\344\270\213\351\231\220</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_tempMin->setPrefix(QString());
        label_13->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\271\277\345\272\246\345\274\202\345\270\270\346\257\224\350\276\203\345\200\274</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_humiCompare->setPrefix(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\271\277\345\272\246\345\200\274\344\270\212\351\231\220</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_humiMax->setPrefix(QString());
        label_6->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\271\277\345\272\246\345\200\274\344\270\213\351\231\220</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_humiMin->setPrefix(QString());
        label_17->setText(QApplication::translate("set", "\347\262\211\345\260\230\345\274\202\345\270\270\346\257\224\350\276\203\345\200\274:", nullptr));
        label_22->setText(QString());
        label_21->setText(QApplication::translate("set", "\347\262\211\345\260\230\345\200\274\344\270\212\351\231\220:", nullptr));
        label_20->setText(QApplication::translate("set", "\347\262\211\345\260\230\345\200\274\344\270\213\351\231\220:", nullptr));
        label_14->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\205\211\347\205\247\345\274\202\345\270\270\346\257\224\350\276\203\345\200\274</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_lightCompare->setPrefix(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\205\211\347\205\247\345\200\274\344\270\212\351\231\220</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_lightMax->setPrefix(QString());
        label_9->setText(QApplication::translate("set", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\205\211\347\205\247\345\200\274\344\270\213\351\231\220</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p></body></html>", nullptr));
        doubleSpinBox_lightMin->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class set: public Ui_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
