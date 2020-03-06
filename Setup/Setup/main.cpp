#include "Setup.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Setup w;
    w.show();
    return a.exec();
}
