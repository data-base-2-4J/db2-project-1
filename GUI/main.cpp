#include <iostream>
#include "widget.h"
#include <filesystem>
#include <QApplication>
namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.show();
    fs::path p = fs::current_path();
    int width = w.width();
    int height = w.height();
    std::cout << width << " " << height;
    return a.exec();
}
