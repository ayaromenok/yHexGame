#ifndef YLANDOBJECT_H
#define YLANDOBJECT_H

#include "lib/yhexobject.h"

class YLandObject : public YHexObject
{
public:
    YLandObject(YHexObject *parent = nullptr);
    ~YLandObject();
};

#endif // YLANDOBJECT_H
