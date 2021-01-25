#include "finddialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    finddialog *dialog = new finddialog;
    dialog->show();
    return a.exec();
}
