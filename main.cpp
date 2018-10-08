#include "mainwindow.h"
#include <QApplication>
#include <QBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    QBoxLayout mainWindowLayout(QBoxLayout::TopToBottom, &w);
    w.setLayout(&mainWindowLayout);

    QPushButton samplePushButton;
    mainWindowLayout.addWidget(&samplePushButton);

    w.showFullScreen();

    return a.exec();
}
