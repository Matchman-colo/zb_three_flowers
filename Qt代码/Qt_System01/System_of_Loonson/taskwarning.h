#ifndef TASKWARNING_H
#define TASKWARNING_H

#include "widget.h"

class taskWarning : public QObject
{
    Q_OBJECT
public:
    explicit taskWarning(QObject *parent = nullptr);

    void TaskWarning();

signals:
    void Signal_Warning(unsigned int error_index);

};

#endif // TASKWARNING_H
