#include "mainwid.h"
#include <QApplication>
#include <QFontDatabase>
#include <QDebug>
//#undef main

int main(int argc, char *argv[])
{
    //负责管理程序的控制流（事件循环）、解析命令行参数、处理窗口系统的初始化（如鼠标点击、键盘输入等）
    QApplication a(argc, argv);
    
    // 使用第三方字库，用来作为UI图片 ://res/fa-solid-900.ttf  
    // 前面的 :// 表示这个字体文件被打包在 Qt 的资源文件（.qrc）里了。
    QFontDatabase::addApplicationFont("://res/fontawesome-webfont.ttf");
    //QFontDatabase::addApplicationFont("://res/fa-solid-900.ttf");

    MainWid w;
    if (w.Init() == false)
    {
        return -1;
    }
    // 显示主窗口
    w.show();

    // 进入事件循环，等待用户交互（如点击窗口、键盘输入等）
    return a.exec();
}
