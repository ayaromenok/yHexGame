#ifndef YOBJECT_H
#define YOBJECT_H

#include <QObject>
#include <QLoggingCategory>
Q_DECLARE_LOGGING_CATEGORY(yobject)

class YObject : public QObject
{
    Q_OBJECT
public:
    explicit YObject(QObject *parent = nullptr);
    ~YObject(();

signals:

};

#endif // YOBJECT_H
