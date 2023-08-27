#include "mainwindow.h"

#include <QApplication>
/* main函数 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
