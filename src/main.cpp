#include "mainwidget.h"

#include <QApplication>
#include <QDebug>
#include <QLibraryInfo>
#include <QLoggingCategory>

void setLoggingCategory(){
    qInfo() << "Qt:" << QLibraryInfo::version();
    QLoggingCategory::setFilterRules(QStringLiteral("*.debug=false"));
    QLoggingCategory::setFilterRules(QStringLiteral("main.widget.*=true"));
}
int main(int argc, char *argv[])
{
    setLoggingCategory();

    QApplication a(argc, argv);
    MainWidget w;
    w.show();
    return a.exec();
}
