#ifndef NODE3_H
#define NODE3_H

#include <QWidget>
#include "widget.h"


QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class Node3;
}
QT_END_NAMESPACE


class Node3 : public QWidget
{
    Q_OBJECT

public:
    explicit Node3(QWidget *parent = 0);
    ~Node3();

    void Init_Chart();


signals:
    void Signal_Return();
    void Node3_Danger();
    void Node3_Safe();

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
    Ui::Node3 *ui;
};

#endif // NODE3_H
