#include "node2.h"
#include "ui_node2.h"

Node2::Node2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Node2)
{
    ui->setupUi(this);
    QPalette pal = window()->palette();
    pal.setColor(QPalette::Window, QRgb(0xcee7f0));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    window()->setPalette(pal);
    pal.setColor(QPalette::WindowText, Qt::blue);
    ui->label_time->setPalette(pal);
    QFont ft;
    ft.setPointSize(11);
    ui->label_time->setFont(ft);
    ft.setPointSize(12);
    ui->pushButton_temp->setFont(ft);
    ui->pushButton_humi->setFont(ft);
    ui->pushButton_light->setFont(ft);
    ui->pushButton_powder->setFont(ft);
    Init_Chart();
}

Node2::~Node2()
{
    delete ui;
}

void Node2::Init_Chart()
{
    // == 节点二曲线 ==
    chart_nodeTwo = new QChart();       // - 初始化QChart的实例
    QPen pen(Qt::red);          // - 画笔对象
    pen.setWidth(3);
    QFont font("Microsoft YaHei",8,QFont::Normal);      // - 微软雅黑。字体大小8
    // == 曲线1 ==
    Series_nodeTwo_One = new QSplineSeries();        // - 初始化QSplineSeries的实例
    Series_nodeTwo_One->setName("温度曲线");     // - 设置曲线的名称
    pen.setColor(Qt::red);
    Series_nodeTwo_One->setPen(pen);
    chart_nodeTwo->addSeries(Series_nodeTwo_One);        // - 把曲线添加到QChart的实例chart中
    // == 曲线2 ==
    Series_nodeTwo_Two = new QSplineSeries();
    Series_nodeTwo_Two->setName("湿度曲线");
    pen.setColor(Qt::blue);
    Series_nodeTwo_Two->setPen(pen);
    chart_nodeTwo->addSeries(Series_nodeTwo_Two);
    // == 曲线3 ==
    Series_nodeTwo_Thr = new QSplineSeries();
    Series_nodeTwo_Thr->setName("光照曲线");
    pen.setColor(Qt::green);
    Series_nodeTwo_Thr->setPen(pen);
    chart_nodeTwo->addSeries(Series_nodeTwo_Thr);
    // == 曲线4 ==
     Series_nodeTwo_Fou = new QSplineSeries();
     Series_nodeTwo_Fou->setName("气压曲线");
     pen.setColor(Qt::green);
     Series_nodeTwo_Fou->setPen(pen);
     chart_nodeTwo->addSeries(Series_nodeTwo_Fou);
     //粉尘
    // == 坐标轴设置 ==
    axisX_nodeTwo = new QDateTimeAxis();    // - 声明并初始化X轴、两个Y轴
    axisY_nodeTwo = new QValueAxis();
    axisY_nodeTwo->setRange(0, MAX_Y);      // - 设置坐标轴显示的范围
    axisX_nodeTwo->setTickCount(10);        // - 设置坐标轴上的格点
    axisY_nodeTwo->setTickCount(20);
    axisX_nodeTwo->setFormat("hh:mm:ss");   // - 设置时间显示格式
    axisX_nodeTwo->setTitleFont(font);      // - 字体设置
    axisY_nodeTwo->setTitleFont(font);
    axisX_nodeTwo->setTitleText("时间轴");  // - 坐标轴名称设置
    axisY_nodeTwo->setTitleText("温度值");
    //axisY->setGridLineVisible(false);       // - 设置网格不显示
    chart_nodeTwo->addAxis(axisX_nodeTwo, Qt::AlignBottom);     //下方：Qt::AlignBottom，左边：Qt::AlignLeft
    chart_nodeTwo->addAxis(axisY_nodeTwo, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_humi_nodeTwo = new QValueAxis();
    axisY_humi_nodeTwo->setRange(0, MAX_Y_HUMI);
    axisY_humi_nodeTwo->setTickCount(20);
    axisY_humi_nodeTwo->setTitleFont(font);
    axisY_humi_nodeTwo->setTitleText("湿度值");
    chart_nodeTwo->addAxis(axisY_humi_nodeTwo, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_light_nodeTwo = new QValueAxis();
    axisY_light_nodeTwo->setRange(0, MAX_Y_LIGHT);
    axisY_light_nodeTwo->setTickCount(20);
    axisY_light_nodeTwo->setTitleFont(font);
    axisY_light_nodeTwo->setTitleText("光照值");
    chart_nodeTwo->addAxis(axisY_light_nodeTwo, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_powder_nodeTwo = new QValueAxis();
    axisY_powder_nodeTwo->setRange(0, MAX_Y_POWDER);
    axisY_powder_nodeTwo->setTickCount(20);
    axisY_powder_nodeTwo->setTitleFont(font);
    axisY_powder_nodeTwo->setTitleText("气压值");
    chart_nodeTwo->addAxis(axisY_powder_nodeTwo, Qt::AlignLeft);




    Series_nodeTwo_One->attachAxis(axisX_nodeTwo);       // - 把曲线关联到坐标轴
    Series_nodeTwo_One->attachAxis(axisY_nodeTwo);
    Series_nodeTwo_Two->attachAxis(axisX_nodeTwo);
    Series_nodeTwo_Two->attachAxis(axisY_humi_nodeTwo);
    Series_nodeTwo_Thr->attachAxis(axisX_nodeTwo);
    Series_nodeTwo_Thr->attachAxis(axisY_light_nodeTwo);
    Series_nodeTwo_Fou->attachAxis(axisX_nodeTwo);
    Series_nodeTwo_Fou->attachAxis(axisY_powder_nodeTwo);




    Series_nodeTwo_One->show();
    Series_nodeTwo_Two->hide();
    Series_nodeTwo_Thr->hide();
    axisX_nodeTwo->show();
    axisY_humi_nodeTwo->hide();
    axisY_light_nodeTwo->hide();
    Series_nodeTwo_Fou->hide();
    axisY_powder_nodeTwo->hide();

    // == 把chart显示到窗口上 ==
    ui->graphicsView->setChart(chart_nodeTwo);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);      // 设置渲染：抗锯齿，如果不设置那么曲线就显得不平滑
    chart_nodeTwo->setTheme(QChart::ChartThemeBlueIcy);
}

void Node2::on_pushButton_return_clicked()
{
    emit Signal_Return();
}

void Node2::on_pushButton_temp_clicked()
{
    Series_nodeTwo_One->show();
    Series_nodeTwo_Two->hide();
    Series_nodeTwo_Thr->hide();
    axisY_nodeTwo->show();
    axisY_humi_nodeTwo->hide();
    axisY_light_nodeTwo->hide();
    Series_nodeTwo_Fou->hide();
    axisY_powder_nodeTwo->hide();

}

void Node2::on_pushButton_humi_clicked()
{
    Series_nodeTwo_One->hide();
    Series_nodeTwo_Two->show();
    Series_nodeTwo_Thr->hide();
    axisY_nodeTwo->hide();
    axisY_humi_nodeTwo->show();
    axisY_light_nodeTwo->hide();
    Series_nodeTwo_Fou->hide();
    axisY_powder_nodeTwo->hide();

}

void Node2::on_pushButton_light_clicked()
{
    Series_nodeTwo_One->hide();
    Series_nodeTwo_Two->hide();
    Series_nodeTwo_Thr->show();
    axisY_nodeTwo->hide();
    axisY_humi_nodeTwo->hide();
    axisY_light_nodeTwo->show();
    Series_nodeTwo_Fou->hide();
    axisY_powder_nodeTwo->hide();

}
void Node2::on_pushButton_powder_clicked()
{
    Series_nodeTwo_One->hide();
    Series_nodeTwo_Two->hide();
    Series_nodeTwo_Thr->hide();
    axisY_nodeTwo->hide();
    axisY_humi_nodeTwo->hide();
    axisY_light_nodeTwo->hide();
    Series_nodeTwo_Fou->show();
    axisY_powder_nodeTwo->show();
}

void Node2::Slot_RefreshTime()
{
    ui->label_time->setText(stringCurrentTime);
}

bool mutex_log_2;
unsigned char mutex_power2;
void Node2::Slot_Warning(unsigned int error_index)
{
    if(state_nodeTwo)
    {
        if(mutex_log_2 == 0)
        {
            mutex_log_2 = 1;
            ui->textEdit_log->setTextColor(Qt::blue);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 节点二已上线！");
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoBlue.png);border:none;color:rgb(255,255,255);}");
            node_number++;
            node_disnumber--;
        }


        if(error_index & 0x08)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 温度异常！");
            ui->textEdit_temp->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoRed.png);border:none;color:rgb(255,255,255);}");

            if(flag2==0)
            {
                flag2=1;
                emit Node2_Danger();

            }
        }
        else
        {
            ui->textEdit_temp->setTextColor(Qt::black);
            error4 = 0;
            if(flag2==1)
            {
                flag2=0;
                emit Node2_Safe();

            }
        }

        if(error_index & 0x10)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 湿度异常！");
            ui->textEdit_humi->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoRed.png);border:none;color:rgb(255,255,255);}");
            if(flag2==0)
            {
                flag2=1;
                emit Node2_Danger();

            }
        }
        else
        {
            ui->textEdit_humi->setTextColor(Qt::black);
            error5 = 0;
            if(flag2==1)
            {
                flag2=0;
                emit Node2_Safe();

            }
        }

        if(error_index & 0x20)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 光照异常！");
            ui->textEdit_light->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoRed.png);border:none;color:rgb(255,255,255);}");
            if(flag2==0)
            {
                flag2=1;
                emit Node2_Danger();

            }
        }
        else
        {
            ui->textEdit_light->setTextColor(Qt::black);
            error6 = 0;
            if(flag2==1)
            {
                flag2 = 0;
                emit Node2_Safe();

            }
        }


        if(error_index & 0x2000)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ":气压异常！");
            ui->textEdit_powder->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoRed.png);border:none;color:rgb(255,255,255);}");
            if(flag2==0)
            {
                flag2=1;
                emit Node2_Danger();

            }
        }
        else
        {
            ui->textEdit_light->setTextColor(Qt::black);
            error14 = 0;
            if(flag2==1)
            {
                flag2=0;
                emit Node2_Safe();

            }
        }
        if((error_index & 0x2038) == 0)
        {
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoBlue.png);border:none;color:rgb(255,255,255);}");
            if(flag2==0)
            {
                flag2=1;
                emit Node2_Danger();

            }
        }

#ifdef test
    static int i = 0;
    qreal a = puc_Temp[i];
    qreal b = puc_Temp2[i];
    qreal c = puc_Temp3[i];
    ui->textEdit_temp->append(stringCurrentTimeMessage + ": " + QString::number(a) + "℃");
    ui->textEdit_humi->append(stringCurrentTimeMessage + ": " + QString::number(b) + "%RH");
    ui->textEdit_light->append(stringCurrentTimeMessage + ": " + QString::number(c) + "lm");
    i++;
    i %= 10;
#else
    ui->textEdit_temp->append(stringCurrentTimeMessage + ": " + stringTemp2 + "℃");
    ui->textEdit_humi->append(stringCurrentTimeMessage + ": " + stringHumi2 + "%RH");
    ui->textEdit_light->append(stringCurrentTimeMessage + ": " + stringLight2 + "lm");
    ui->textEdit_powder->append(stringCurrentTimeMessage + ": " + stringPowder2 + "kPa");
#endif
    }
    else
    {
        if(mutex_log_2)
        {
            mutex_log_2 = 0;
            ui->textEdit_log->setTextColor(Qt::black);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 节点二已下线！");
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeTwoBlack.png);border:none;color:rgb(255,255,255);}");

            node_number--;
            node_disnumber++;
            error4 = error5 = error6 = error11 =error14 = 0;
        }
    }
}

void Node2::on_pushButton_data_clicked()
{
    if (ui->textEdit_temp->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "提示", "数据内容空");
        return;
    }
    QString data;
    data.append("节点二温度值");
    data.append("\r\n");
    data.append(ui->textEdit_temp->toPlainText());
    data.append("\r\n");
    data.append("节点二湿度值");
    data.append("\r\n");
    data.append(ui->textEdit_humi->toPlainText());
    data.append("\r\n");
    data.append("节点二光照值");
    data.append("\r\n");
    data.append(ui->textEdit_light->toPlainText());
    data.append("\r\n");
    data.append("节点二气压值");
    data.append("\r\n");
    data.append(ui->textEdit_powder->toPlainText());
    data.append("\r\n");
    QString curPath = QDir::currentPath();            //获取系统当前目录
    QString dlgTitle = "保存文件";                     //对话框标题
    QString filter = "文本文件(*.txt);;所有文件(*.*)";  //文件过滤器
    QString filename = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if (filename.isEmpty())
    {
        return;
    }
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly))
    {
        return;
    }

    /*保存文件*/
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    stream << data;
    file.close();
}


