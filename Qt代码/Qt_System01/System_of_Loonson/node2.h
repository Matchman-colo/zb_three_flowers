#ifndef NODE2_H
#define NODE2_H

#include <QWidget>
#include "widget.h"


QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class Node2;
}
QT_END_NAMESPACE


class Node2 : public QWidget
{
    Q_OBJECT

public:
    explicit Node2(QWidget *parent = 0);
    ~Node2();

    void Init_Chart();

signals:
    void Signal_Return();

    void Node2_Danger();
    void Node2_Safe();

private slots:
    void on_pushButton_return_clicked();

    void on_pushButton_temp_clicked();

    void on_pushButton_humi_clicked();

    void on_pushButton_light_clicked();

    void Slot_RefreshTime();

    void Slot_Warning(unsigned int error_index);

    void on_pushButton_data_clicked();

    void on_pushButton_powder_clicked();

private:
    Ui::Node2 *ui;
};

#endif // NODE2_H
