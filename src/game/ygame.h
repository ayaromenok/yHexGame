#ifndef YGAME_H
#define YGAME_H

#include "lib/yobject.h"
class YLandObject;
class YConstructionObject;
class YUnitObject;

class YGame : public YObject
{
public:
    YGame(YObject *parent = nullptr);
    ~YGame();
private:
    void initGame();
    QList<YLandObject*>*            _lL;
    QList<YConstructionObject*>*    _lC;
    QList<YUnitObject*>*            _lU;

    void initLand();
    void initConstruction();
    void initUnits();
};

#endif // YGAME_H
