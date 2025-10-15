#include "hellowordwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hellowordWidget w;
    w.show();
    return a.exec();
}
