#include "node3.h"
#include "ui_node3.h"

Node3::Node3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Node3)
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

Node3::~Node3()
{
    delete ui;
}

void Node3::Init_Chart()
{
    // == 节点三曲线 ==
    chart_nodeThr = new QChart();       // - 初始化QChart的实例
    QPen pen(Qt::red);          // - 画笔对象
    pen.setWidth(3);
    QFont font("Microsoft YaHei",8,QFont::Normal);      // - 微软雅黑。字体大小8
    // == 曲线1 ==
    Series_nodeThr_One = new QSplineSeries();        // - 初始化QSplineSeries的实例
    Series_nodeThr_One->setName("温度曲线");     // - 设置曲线的名称
    pen.setColor(Qt::red);
    Series_nodeThr_One->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_One);        // - 把曲线添加到QChart的实例chart中
    // == 曲线2 ==
    Series_nodeThr_Two = new QSplineSeries();
    Series_nodeThr_Two->setName("湿度曲线");
    pen.setColor(Qt::blue);
    Series_nodeThr_Two->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_Two);
    // == 曲线3 ==
    Series_nodeThr_Thr = new QSplineSeries();
    Series_nodeThr_Thr->setName("光照曲线");
    pen.setColor(Qt::green);
    Series_nodeThr_Thr->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_Thr);
    // == 曲线4 ==
    Series_nodeThr_Fou = new QSplineSeries();
    Series_nodeThr_Fou->setName("气压曲线");
    pen.setColor(Qt::green);
    Series_nodeThr_Fou->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_Fou);
    // == 坐标轴设置 ==
    axisX_nodeThr = new QDateTimeAxis();    // - 声明并初始化X轴、两个Y轴
    axisY_nodeThr = new QValueAxis();
    axisY_nodeThr->setRange(0, MAX_Y);      // - 设置坐标轴显示的范围
    axisX_nodeThr->setTickCount(10);        // - 设置坐标轴上的格点
    axisY_nodeThr->setTickCount(20);
    axisX_nodeThr->setFormat("hh:mm:ss");   // - 设置时间显示格式
    axisX_nodeThr->setTitleFont(font);      // - 字体设置
    axisY_nodeThr->setTitleFont(font);
    axisX_nodeThr->setTitleText("时间轴");  // - 坐标轴名称设置
    axisY_nodeThr->setTitleText("温度值");
    //axisY->setGridLineVisible(false);       // - 设置网格不显示
    chart_nodeThr->addAxis(axisX_nodeThr, Qt::AlignBottom);     //下方：Qt::AlignBottom，左边：Qt::AlignLeft
    chart_nodeThr->addAxis(axisY_nodeThr, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_humi_nodeThr = new QValueAxis();
    axisY_humi_nodeThr->setRange(0, MAX_Y_HUMI);
    axisY_humi_nodeThr->setTickCount(20);
    axisY_humi_nodeThr->setTitleFont(font);
    axisY_humi_nodeThr->setTitleText("湿度值");
    chart_nodeThr->addAxis(axisY_humi_nodeThr, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_light_nodeThr = new QValueAxis();
    axisY_light_nodeThr->setRange(0, MAX_Y_LIGHT);
    axisY_light_nodeThr->setTickCount(20);
    axisY_light_nodeThr->setTitleFont(font);
    axisY_light_nodeThr->setTitleText("光照值");
    chart_nodeThr->addAxis(axisY_light_nodeThr, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop



    // == 坐标轴设置 ==
    axisY_powder_nodeThr = new QValueAxis();
    axisY_powder_nodeThr->setRange(0, MAX_Y_POWDER);
    axisY_powder_nodeThr->setTickCount(20);
    axisY_powder_nodeThr->setTitleFont(font);
    axisY_powder_nodeThr->setTitleText("气压值");
    chart_nodeThr->addAxis(axisY_powder_nodeThr, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::Al

    Series_nodeThr_One->attachAxis(axisX_nodeThr);       // - 把曲线关联到坐标轴
    Series_nodeThr_One->attachAxis(axisY_nodeThr);
    Series_nodeThr_Two->attachAxis(axisX_nodeThr);
    Series_nodeThr_Two->attachAxis(axisY_humi_nodeThr);
    Series_nodeThr_Thr->attachAxis(axisX_nodeThr);
    Series_nodeThr_Thr->attachAxis(axisY_light_nodeThr);
    Series_nodeThr_Fou->attachAxis(axisX_nodeThr);
    Series_nodeThr_Fou->attachAxis(axisY_powder_nodeThr);

    Series_nodeThr_One->show();
    Series_nodeThr_Two->hide();
    Series_nodeThr_Thr->hide();
    axisX_nodeThr->show();
    axisY_humi_nodeThr->hide();
    axisY_light_nodeThr->hide();
    Series_nodeThr_Fou->hide();
    axisY_powder_nodeThr->hide();
    // == 把chart显示到窗口上 ==
    ui->graphicsView->setChart(chart_nodeThr);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);      // 设置渲染：抗锯齿，如果不设置那么曲线就显得不平滑
    chart_nodeThr->setTheme(QChart::ChartThemeBlueIcy);
}

void Node3::on_pushButton_return_clicked()
{
    emit Signal_Return();
}

void Node3::on_pushButton_temp_clicked()
{
    Series_nodeThr_One->show();
    Series_nodeThr_Two->hide();
    Series_nodeThr_Thr->hide();
    axisY_nodeThr->show();
    axisY_humi_nodeThr->hide();
    axisY_light_nodeThr->hide();
    Series_nodeThr_Fou->hide();
    axisY_powder_nodeThr->hide();
}

void Node3::on_pushButton_humi_clicked()
{
    Series_nodeThr_One->hide();
    Series_nodeThr_Two->show();
    Series_nodeThr_Thr->hide();
    axisY_nodeThr->hide();
    axisY_humi_nodeThr->show();
    axisY_light_nodeThr->hide();
    Series_nodeThr_Fou->hide();
    axisY_powder_nodeThr->hide();
}

void Node3::on_pushButton_light_clicked()
{
    Series_nodeThr_One->hide();
    Series_nodeThr_Two->hide();
    Series_nodeThr_Thr->show();
    axisY_nodeThr->hide();
    axisY_humi_nodeThr->hide();
    axisY_light_nodeThr->show();
    Series_nodeThr_Fou->hide();
    axisY_powder_nodeThr->hide();
}

void Node3::on_pushButton_powder_clicked()
{
    Series_nodeThr_One->hide();
    Series_nodeThr_Two->hide();
    Series_nodeThr_Thr->hide();
    axisY_nodeThr->hide();
    axisY_humi_nodeThr->hide();
    axisY_light_nodeThr->hide();
    Series_nodeThr_Fou->show();
    axisY_powder_nodeThr->show();



}


void Node3::Slot_RefreshTime()
{
    ui->label_time->setText(stringCurrentTime);
}

bool mutex_log_3;
unsigned char mutex_power3;
void Node3::Slot_Warning(unsigned int error_index)
{
    if(state_nodeThr)
    {
        if(mutex_log_3 == 0)
        {
            mutex_log_3 = 1;
            ui->textEdit_log->setTextColor(Qt::blue);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 节点三已上线！");
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrBlue.png);border:none;color:rgb(255,255,255);}");
            node_number++;
            node_disnumber--;
        }


        if(error_index & 0x40)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 温度异常！");
            ui->textEdit_temp->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrRed.png);border:none;color:rgb(255,255,255);}");
            if(flag3==0)
            {
                flag3=1;
                emit Node3_Danger();

            }
        }
        else
        {
            ui->textEdit_temp->setTextColor(Qt::black);
            error7 = 0;
            if(flag3==1)
            {
                flag3=0;
                emit Node3_Safe();

            }
        }

        if(error_index & 0x80)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 湿度异常！");
            ui->textEdit_humi->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrRed.png);border:none;color:rgb(255,255,255);}");
            if(flag3==0)
            {
                flag3=1;
                emit Node3_Danger();

            }
        }
        else
        {
            ui->textEdit_humi->setTextColor(Qt::black);
            error8 = 0;
            if(flag3==1)
            {
                flag3=0;
                emit Node3_Safe();

            }
        }

        if(error_index & 0x100)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 光照异常！");
            ui->textEdit_light->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrRed.png);border:none;color:rgb(255,255,255);}");
            if(flag3==0)
            {
                flag3=1;
                emit Node3_Danger();

            }
        }
        else
        {
            ui->textEdit_light->setTextColor(Qt::black);
            error9 = 0;
            if(flag3==1)
            {
                flag3=0;
                emit Node3_Safe();

            }
        }

        if(error_index & 0x4000)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 气压异常！");
            ui->textEdit_light->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrRed.png);border:none;color:rgb(255,255,255);}");
            if(flag3==0)
            {
                flag3=1;
                emit Node3_Danger();

            }
        }
        else
        {
            ui->textEdit_light->setTextColor(Qt::black);
            error15 = 0;
            if(flag3==1)
            {
                flag3=0;
                emit Node3_Safe();

            }
        }
        if((error_index & 0x41C0) == 0)
        {
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrBlue.png);border:none;color:rgb(255,255,255);}");
            if(flag3==0)
            {
                flag3=1;
                emit Node3_Danger();

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
    ui->textEdit_temp->append(stringCurrentTimeMessage + ": " + stringTemp3 + "℃");
    ui->textEdit_humi->append(stringCurrentTimeMessage + ": " + stringHumi3 + "%RH");
    ui->textEdit_light->append(stringCurrentTimeMessage + ": " + stringLight3 + "lm");
    ui->textEdit_powder->append(stringCurrentTimeMessage + ": " + stringPowder3 + "kPa");

#endif
    }
    else
    {
        if(mutex_log_3)
        {
            mutex_log_3 = 0;
            ui->textEdit_log->setTextColor(Qt::black);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 节点三已下线！");
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeThrBlack.png);border:none;color:rgb(255,255,255);}");
            node_number--;
            node_disnumber++;
            error7 = error8 = error9 = error12 =error15 = 0;
        }
    }
}

void Node3::on_pushButton_data_clicked()
{
    if (ui->textEdit_temp->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "提示", "数据内容空");
        return;
    }
    QString data;
    data.append("节点三温度值");
    data.append("\r\n");
    data.append(ui->textEdit_temp->toPlainText());
    data.append("\r\n");
    data.append("节点三湿度值");
    data.append("\r\n");
    data.append(ui->textEdit_humi->toPlainText());
    data.append("\r\n");
    data.append("节点三光照值");
    data.append("\r\n");
    data.append(ui->textEdit_light->toPlainText());
    data.append("\r\n");
    data.append("节点三气压值");
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


