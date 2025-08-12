#include "mainwindow.h"
#include <QApplication>
#include <QStandardPaths>
#include <QFile>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // fstream file("../../data/Home.txt");
    // if(file.is_open()){
    //     QTextStream(stdout) << "ITS OPEN";
    //     string s;
    //     getline(file, s);
    //     QString ss = QString::fromStdString(s);
    //     QTextStream(stdout) << ss;
    // }
    //return 0;
    return a.exec();
}
