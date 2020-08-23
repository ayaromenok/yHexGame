#include "game/ygame.h"

#include "lib/ylandobject.h"
#include "lib/yconstructionobject.h"
#include "lib/yunitobject.h"

YGame::YGame(YObject *parent) : YObject(parent){
    initGame();
}//YGame()

YGame::~YGame(){
    if (!_lL->isEmpty()){
        _lL->clear();
    }
    delete _lL;

    if (!_lC->isEmpty()){
        _lC->clear();
    }
    delete _lC;

    if (!_lU->isEmpty()){
        _lU->clear();
    }
    delete _lU;
}//~YGame()

void
YGame::initGame(){
    _lL = new QList<YLandObject*>;
    _lC = new QList<YConstructionObject*>;
    _lU = new QList<YUnitObject*>;

    if (_lL->isEmpty()){
        initLand();
    }
    if (_lC->isEmpty()){
        initConstruction();
    }
    if (_lU->isEmpty()){
        initUnits();
    }
}//initGame()

void
YGame::initLand(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            YLandObject* _lo = new YLandObject();
            _lo->setParent(this);
            _lo->setObjectName("land/land:"+QString::number(i)+","+QString::number(j));
            _lL->append(_lo);
        }//for j
    }//for i
}//initLand()

void
YGame::initConstruction(){
    for (int i=0; i<3; i++){
        YConstructionObject* _co = new YConstructionObject();
        _co->setParent(this);
        _co->setObjectName("construction/constr:"+QString::number(i));
        _lC->append(_co);
    }//for i
}//initConstruction()

void
YGame::initUnits(){
    for (int i=0; i<2; i++){
        YUnitObject* _uo = new YUnitObject();
        _uo->setParent(this);
        _uo->setObjectName("unit/unit"+QString::number(i));
        _lU->append(_uo);
    }//for i
}//initUnits()
