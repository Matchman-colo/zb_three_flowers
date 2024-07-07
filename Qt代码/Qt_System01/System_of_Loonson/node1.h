#ifndef NODE1_H
#define NODE1_H

#include <QWidget>
#include "widget.h"


QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class Node1;
}
QT_END_NAMESPACE

class Node1 : public QWidget
{
    Q_OBJECT

public:
    explicit Node1(QWidget *parent = 0);
    ~Node1();

    void Init_Chart();

signals:
    void Signal_Return();

    void Node1_Danger();
    void Node1_Safe();


private slots:
    void on_pushButton_return_clicked();

    void on_pushButton_temp_clicked();

    void on_pushButton_humi_clicked();

    void on_pushButton_light_clicked();

    void on_pushButton_powder_clicked();

    void Slot_RefreshTime();

    void Slot_Warning(unsigned int error_index);

    void on_pushButton_data_clicked();




private:
    Ui::Node1 *ui;
};

#endif // NODE1_H
