#ifndef HELLOWORDWIDGET_H
#define HELLOWORDWIDGET_H

#include <QWidget>

class hellowordWidget : public QWidget
{
    Q_OBJECT

public:
    hellowordWidget(QWidget *parent = nullptr);
    ~hellowordWidget();
};
#endif // HELLOWORDWIDGET_H
