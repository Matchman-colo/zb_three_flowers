#include "set.h"
#include "ui_set.h"

set::set(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);
    QPalette pal = window()->palette();
    pal.setColor(QPalette::Window, QRgb(0xdceaf6));
//    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    window()->setPalette(pal);
    pal.setColor(QPalette::WindowText, Qt::blue);
    ui->label_time->setPalette(pal);
    QFont ft;
    ft.setPointSize(20);
    ui->label_time->setFont(ft);
    temp_max = ui->doubleSpinBox_tempMax->value();
    temp_min = ui->doubleSpinBox_tempMin->value();
    humi_max = ui->doubleSpinBox_humiMax->value();
    humi_min = ui->doubleSpinBox_humiMin->value();
    light_max = ui->doubleSpinBox_lightMax->value();
    light_min = ui->doubleSpinBox_lightMin->value();
    powder_max = ui->doubleSpinBox_powderMax->value();
    powder_min = ui->doubleSpinBox_powderMin->value();


    temp_compare = ui->doubleSpinBox_tempCompare->value();
    humi_compare = ui->doubleSpinBox_humiCompare->value();
    light_compare = ui->doubleSpinBox_lightCompare->value();
    powder_compare = ui->doubleSpinBox_powderCompare->value();
}

set::~set()
{
    delete ui;
}

void set::on_pushButton_clicked()
{
    emit Signal_Return();
}

void set::on_doubleSpinBox_tempMax_valueChanged(double arg1)
{
    if(arg1 < temp_min)
    {
        QMessageBox::warning(this, "Warning", "温度上限值不能小于下限值!!!请重新设置~~~");
    }
    else
    {
        temp_max = arg1;

    }

}

void set::on_doubleSpinBox_tempMin_valueChanged(double arg1)
{
    if(arg1 > temp_max)
    {
        QMessageBox::warning(this, "Warning", "温度下限值不能大于上限值!!!请重新设置~~~");
    }
    else
    {
        temp_min = arg1;

    }
}

void set::on_doubleSpinBox_humiMax_valueChanged(double arg1)
{
    if(arg1 < humi_min)
    {
        QMessageBox::warning(this, "Warning", "湿度上限值不能小于下限值!!!请重新设置~~~");
    }
    else
    {
        humi_max = arg1;

    }
}

void set::on_doubleSpinBox_humiMin_valueChanged(double arg1)
{
    if(arg1 > humi_max)
    {
        QMessageBox::warning(this, "Warning", "湿度下限值不能大于上限值!!!请重新设置~~~");
    }
    else
    {
        humi_min = arg1;

    }
}

void set::on_doubleSpinBox_lightMax_valueChanged(double arg1)
{
    if(arg1 < light_min)
    {
        QMessageBox::warning(this, "Warning", "光照上限值不能小于下限值!!!请重新设置~~~");
    }
    else
    {
        light_max = arg1;

    }
}

void set::on_doubleSpinBox_lightMin_valueChanged(double arg1)
{
    if(arg1 > light_max)
    {
        QMessageBox::warning(this, "Warning", "光照下限值不能大于上限值!!!请重新设置~~~");
    }
    else
    {
        light_min = arg1;

    }
}

void set::on_doubleSpinBox_powderMax_valueChanged(double arg1)
{
    if(arg1 < powder_min)
    {
        QMessageBox::warning(this, "Warning", "气压下限值不能小于下限值!!!请重新设置~~~");
    }
    else
    {
        powder_max = arg1;

    }
}

void set::on_doubleSpinBox_powderMin_valueChanged(double arg1)
{
    if(arg1 > powder_max)
    {
        QMessageBox::warning(this, "Warning", "气压下限值不能大于上限值!!!请重新设置~~~");
    }
    else
    {
        powder_min = arg1;

    }
}


void set::Slot_RefreshTime()
{
    ui->label_time->setText(stringCurrentTime);


}

void set::on_doubleSpinBox_tempCompare_valueChanged(double arg1)
{
    temp_compare = arg1;
}

void set::on_doubleSpinBox_humiCompare_valueChanged(double arg1)
{
    humi_compare = arg1;
}

void set::on_doubleSpinBox_lightCompare_valueChanged(double arg1)
{
    light_compare = arg1;
}


void set::on_doubleSpinBox_powderCompare_valueChanged(double arg1)
{
    powder_compare = arg1;
}
