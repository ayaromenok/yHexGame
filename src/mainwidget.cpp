#include "mainwidget.h"
#include <QtWidgets>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent) {
    initLayout();
}

MainWidget::~MainWidget() {
}

void
MainWidget::initLayout() {
    setGeometry(0,0,640,320);
    _loMain = new QVBoxLayout(this);
    _loGame = new QHBoxLayout(this);

    _lbMenu = new QLabel("Menu", this);
    _lbStatusBar = new QLabel("Status Bar", this);
    _lbGame2D = new QLabel("Game 2D", this);
    _lbGame3D = new QLabel("Game 3D", this);
    _lbConsole = new QLabel("Console", this);

    _loGame->addWidget(_lbGame2D);
    _loGame->addWidget(_lbGame3D);
    _loGame->addWidget(_lbConsole);

    _loMain->addWidget(_lbMenu);
    _loMain->addLayout(_loGame);
    _loMain->addWidget(_lbStatusBar);

    this->setLayout(_loMain);
}
