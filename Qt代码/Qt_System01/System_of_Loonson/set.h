#ifndef SET_H
#define SET_H

#include <QWidget>
#include "taskserialport.h"
#include "widget.h"

namespace Ui {
class set;
}

class set : public QWidget
{
    Q_OBJECT

public:
    explicit set(QWidget *parent = 0);
    ~set();

signals:
    void Signal_Return();

private slots:
    void on_pushButton_clicked();

    void on_doubleSpinBox_tempMax_valueChanged(double arg1);

    void on_doubleSpinBox_tempMin_valueChanged(double arg1);

    void on_doubleSpinBox_humiMax_valueChanged(double arg1);

    void on_doubleSpinBox_humiMin_valueChanged(double arg1);

    void on_doubleSpinBox_lightMax_valueChanged(double arg1);

    void on_doubleSpinBox_lightMin_valueChanged(double arg1);

    void Slot_RefreshTime();

    void on_doubleSpinBox_tempCompare_valueChanged(double arg1);

    void on_doubleSpinBox_humiCompare_valueChanged(double arg1);

    void on_doubleSpinBox_lightCompare_valueChanged(double arg1);



    void on_doubleSpinBox_powderMax_valueChanged(double arg1);

    void on_doubleSpinBox_powderMin_valueChanged(double arg1);

    void on_doubleSpinBox_powderCompare_valueChanged(double arg1);

private:
    Ui::set *ui;
};

#endif // SET_H
