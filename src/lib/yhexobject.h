#ifndef YHEXOBJECT_H
#define YHEXOBJECT_H

#include "lib/yobject.h"

class YHexObject : public YObject
{
public:
    YHexObject(YObject *parent = nullptr);
    ~YHexObject();
};

#endif // YHEXOBJECT_H
