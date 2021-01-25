#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton *quit = new QPushButton("Push Me to Quit");
    QObject::connect(quit, SIGNAL(clicked()), \
                    &app, SLOT(quit()));
    quit->show();
    return app.exec();
}