#ifndef YUNITOBJECT_H
#define YUNITOBJECT_H

#include "lib/yobject.h"

class YUnitObject : public YObject
{
public:
    YUnitObject(YObject *parent = nullptr);
    ~YUnitObject();
};

#endif // YUNITOBJECT_H
