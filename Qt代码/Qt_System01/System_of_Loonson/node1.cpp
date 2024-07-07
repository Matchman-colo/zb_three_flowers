 #include "node1.h"
#include "ui_node1.h"

Node1::Node1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Node1)
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

Node1::~Node1()
{
    delete ui;
}

void Node1::Init_Chart()
{
    chart_nodeOne = new QChart();       // - 初始化QChart的实例
    QPen pen(Qt::red);          // - 画笔对象
    pen.setWidth(3);
    // == 曲线1 ==
    Series_nodeOne_One = new QSplineSeries();        // - 初始化QSplineSeries的实例
    Series_nodeOne_One->setName("温度曲线");     // - 设置曲线的名称
    Series_nodeOne_One->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_One);        // - 把曲线添加到QChart的实例chart中
    // == 曲线2 ==
    Series_nodeOne_Two = new QSplineSeries();
    Series_nodeOne_Two->setName("湿度曲线");
    pen.setColor(Qt::blue);
    Series_nodeOne_Two->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_Two);
    // == 曲线3 ==
    Series_nodeOne_Thr = new QSplineSeries();
    Series_nodeOne_Thr->setName("光照曲线");
    pen.setColor(Qt::green);
    Series_nodeOne_Thr->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_Thr);
    // == 曲线4 ==
    Series_nodeOne_Fou = new QSplineSeries();
    Series_nodeOne_Fou->setName("气压曲线");
    pen.setColor(Qt::darkBlue);
    Series_nodeOne_Fou->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_Fou);



    // == 坐标轴设置 ==
    axisX_nodeOne = new QDateTimeAxis();        // - 声明并初始化X轴、两个Y轴
//    axisX_nodeOne = new QValueAxis();
    axisY_nodeOne_temp = new QValueAxis();
//    axisX_nodeOne->setRange(0, MAX_X);      // - 设置坐标轴显示的范围
    axisY_nodeOne_temp->setRange(0, MAX_Y);
    axisX_nodeOne->setTickCount(10);        // - 设置坐标轴上的格点
    axisY_nodeOne_temp->setTickCount(20);
    axisX_nodeOne->setFormat("hh:mm:ss");                        //设置时间显示格式
    QFont font("Microsoft YaHei",8,QFont::Normal);      // - 微软雅黑。字体大小8
    axisX_nodeOne->setTitleFont(font);      // - 字体设置
    axisY_nodeOne_temp->setTitleFont(font);
    axisX_nodeOne->setTitleText("时间轴");  // - 坐标轴名称设置
    axisY_nodeOne_temp->setTitleText("温度值");
    //axisY->setGridLineVisible(false);       // - 设置网格不显示
    chart_nodeOne->addAxis(axisX_nodeOne, Qt::AlignBottom);     //下方：Qt::AlignBottom，左边：Qt::AlignLeft
    chart_nodeOne->addAxis(axisY_nodeOne_temp, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_nodeOne_humi = new QValueAxis();
    axisY_nodeOne_humi->setRange(0, MAX_Y_HUMI);
    axisY_nodeOne_humi->setTickCount(20);
    axisY_nodeOne_humi->setTitleFont(font);
    axisY_nodeOne_humi->setTitleText("湿度值");
    chart_nodeOne->addAxis(axisY_nodeOne_humi, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop

    // == 坐标轴设置 ==
    axisY_nodeOne_light = new QValueAxis();
    axisY_nodeOne_light->setRange(0, MAX_Y_LIGHT);
    axisY_nodeOne_light->setTickCount(20);
    axisY_nodeOne_light->setTitleFont(font);
    axisY_nodeOne_light->setTitleText("光照值");
    chart_nodeOne->addAxis(axisY_nodeOne_light, Qt::AlignLeft);       //右边：Qt::AlignRight，上方：Qt::AlignTop


    // == 坐标轴设置 ==
    axisY_nodeOne_powder = new QValueAxis();
    axisY_nodeOne_powder->setRange(0, MAX_Y_POWDER);
    axisY_nodeOne_powder->setTickCount(20);
    axisY_nodeOne_powder->setTitleFont(font);
    axisY_nodeOne_powder->setTitleText("气压值");
    chart_nodeOne->addAxis(axisY_nodeOne_powder, Qt::AlignLeft);

    Series_nodeOne_One->attachAxis(axisX_nodeOne);       // - 把曲线关联到坐标轴
    Series_nodeOne_One->attachAxis(axisY_nodeOne_temp);
    Series_nodeOne_Two->attachAxis(axisX_nodeOne);
    Series_nodeOne_Two->attachAxis(axisY_nodeOne_humi);
    Series_nodeOne_Thr->attachAxis(axisX_nodeOne);
    Series_nodeOne_Thr->attachAxis(axisY_nodeOne_light);
    Series_nodeOne_Fou->attachAxis(axisX_nodeOne);
    Series_nodeOne_Fou->attachAxis(axisY_nodeOne_powder);


    Series_nodeOne_One->show();
    Series_nodeOne_Two->hide();
    Series_nodeOne_Thr->hide();
    Series_nodeOne_Fou->hide();
    axisY_nodeOne_temp->show();
    axisY_nodeOne_humi->hide();
    axisY_nodeOne_light->hide();
    axisY_nodeOne_powder->hide();
    // == 把chart显示到窗口上 ==
    ui->graphicsView->setChart(chart_nodeOne);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);      // 设置渲染：抗锯齿，如果不设置那么曲线就显得不平滑
    chart_nodeOne->setTheme(QChart::ChartThemeBlueIcy);
}

void Node1::on_pushButton_return_clicked()
{
    emit Signal_Return();
}

void Node1::on_pushButton_temp_clicked()
{
    Series_nodeOne_One->show();
    Series_nodeOne_Two->hide();
    Series_nodeOne_Thr->hide();
    axisY_nodeOne_temp->show();
    axisY_nodeOne_humi->hide();
    axisY_nodeOne_light->hide();
    axisY_nodeOne_powder->hide();
    Series_nodeOne_Fou->hide();
}

void Node1::on_pushButton_humi_clicked()
{
    Series_nodeOne_One->hide();
    Series_nodeOne_Two->show();
    Series_nodeOne_Thr->hide();
    axisY_nodeOne_temp->hide();
    axisY_nodeOne_humi->show();
    axisY_nodeOne_light->hide();
    axisY_nodeOne_powder->hide();
    Series_nodeOne_Fou->hide();
}

void Node1::on_pushButton_light_clicked()
{
    Series_nodeOne_One->hide();
    Series_nodeOne_Two->hide();
    Series_nodeOne_Thr->show();
    axisY_nodeOne_temp->hide();
    axisY_nodeOne_humi->hide();
    axisY_nodeOne_light->show();
    axisY_nodeOne_powder->hide();
    Series_nodeOne_Fou->hide();
}

void Node1::on_pushButton_powder_clicked()
{
    Series_nodeOne_One->hide();
    Series_nodeOne_Two->hide();
    Series_nodeOne_Thr->hide();
    Series_nodeOne_Fou->show();
    axisY_nodeOne_temp->hide();
    axisY_nodeOne_humi->hide();
    axisY_nodeOne_light->hide();
    axisY_nodeOne_powder->show();
}




void Node1::Slot_RefreshTime()
{
    ui->label_time->setText(stringCurrentTime);
}

bool mutex_log;
unsigned char mutex_power1;
void Node1::Slot_Warning(unsigned int error_index)
{
    if(state_nodeOne)
    {
        if(mutex_log == 0)
        {
            mutex_log = 1;
            ui->textEdit_log->setTextColor(Qt::blue);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 节点一已上线！");
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneBlue.png);border:none;color:rgb(255,255,255);}");
            node_number++;
            node_disnumber--;
        }
        if(error_index & 0x01)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 温度异常！");
            ui->textEdit_temp->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneRed.png);border:none;color:rgb(255,255,255);}");

            if(flag1==0)
            {
                flag1=1;
                emit Node1_Danger();

            }

        }
        else
        {
            ui->textEdit_temp->setTextColor(Qt::black);
            error1 = 0;
            if(flag1==1)
            {
                flag1=0;
                emit Node1_Safe();

            }
        }


        if(error_index & 0x02)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 湿度异常！");
            ui->textEdit_humi->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneRed.png);border:none;color:rgb(255,255,255);}");

            if(flag1==0)
            {
                flag1=1;
                emit Node1_Danger();

            }
        }
        else
        {
            ui->textEdit_humi->setTextColor(Qt::black);
            error2 = 0;
            if(flag1==1)
            {
                flag1=0;
                emit Node1_Safe();

            }
        }
        if(error_index & 0x04)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 光照异常！");
            ui->textEdit_light->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneRed.png);border:none;color:rgb(255,255,255);}");

            if(flag1==0)
            {
                flag1=1;
                emit Node1_Danger();

            }
        }
        else
        {
            ui->textEdit_light->setTextColor(Qt::black);
            error3 = 0;
            if(flag1==1)
            {
                flag1=0;
                emit Node1_Safe();

            }
        }


        if(error_index & 0x1000)
        {
            ui->textEdit_log->setTextColor(Qt::red);
            ui->textEdit_log->append(stringCurrentTimeMessage + ":气压异常！");
            ui->textEdit_light->setTextColor(Qt::red);
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneRed.png);border:none;color:rgb(255,255,255);}");

            if(flag1==0)
            {
                flag1=1;
                emit Node1_Danger();

            }
        }
        else
        {
            ui->textEdit_humi->setTextColor(Qt::black);
            error13 = 0;
            if(flag1==1)
            {
                flag1=0;
                emit Node1_Safe();

            }
        }

        if((error_index & 0x1007) == 0)
        {

            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneBlue.png);border:none;color:rgb(255,255,255);}");
            if(flag1==0)
            {
                flag1=1;
                emit Node1_Danger();

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
    ui->textEdit_temp->append(stringCurrentTimeMessage + ": " + stringTemp1 + "℃");
    ui->textEdit_humi->append(stringCurrentTimeMessage + ": " + stringHumi1 + "%RH");
    ui->textEdit_light->append(stringCurrentTimeMessage + ": " + stringLight1 + "lm");
    ui->textEdit_powder->append(stringCurrentTimeMessage + ": " + stringPowder1 + "kPa");

#endif
    }
    else
    {
        if(mutex_log)
        {
            mutex_log = 0;
            ui->textEdit_log->setTextColor(Qt::black);
            ui->textEdit_log->append(stringCurrentTimeMessage + ": 节点一已下线！");
            ui->label_5->setStyleSheet("QLabel{border-image: url(:/pic/NodeOneBlack.png);border:none;color:rgb(255,255,255);}");


            node_number--;
            node_disnumber++;
            error1 = error2 = error3 = error10 =error13 = 0;
        }
    }
}

void Node1::on_pushButton_data_clicked()
{
    if (ui->textEdit_temp->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "提示", "数据内容空");
        return;
    }
    QString data;
    data.append("节点一温度值:");
    data.append("\r\n");
    data.append(ui->textEdit_temp->toPlainText());
    data.append("\r\n");
    data.append("节点一湿度值:");
    data.append("\r\n");
    data.append(ui->textEdit_humi->toPlainText());
    data.append("\r\n");
    data.append("节点一光照值:");
    data.append("\r\n");
    data.append(ui->textEdit_light->toPlainText());
    data.append("\r\n");
    data.append("节点一气压值:");
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


