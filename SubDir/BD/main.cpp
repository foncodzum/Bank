#include "signup.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Signup w;
    w.show();

    return a.exec();
}
