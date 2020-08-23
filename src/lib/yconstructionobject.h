#ifndef YCONSTRUCTIONOBJECT_H
#define YCONSTRUCTIONOBJECT_H

#include "lib/yhexobject.h"

class YConstructionObject : public YHexObject
{
public:
    YConstructionObject(YHexObject *parent = nullptr);
    ~YConstructionObject();
};

#endif // YCONSTRUCTIONOBJECT_H
