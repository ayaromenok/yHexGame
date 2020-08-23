#include "mainwidget.h"
#include <QtWidgets>

#include "game/ygame.h"

Q_LOGGING_CATEGORY(mainWidget, "main.widget")

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent) {
    initLayout();
    initGame();
    dumpObjectTree();
}

MainWidget::~MainWidget() {
}

void
MainWidget::initLayout() {
    qCDebug(mainWidget) << __FUNCTION__<<__LINE__;
    setGeometry(0,0,640,320);

    _loMain = new QVBoxLayout(this);
    _loMain->setObjectName("layout/Main");
    _loGame = new QHBoxLayout();
    _loGame->setObjectName("layout/Game");

    _lbMenu = new QLabel("Menu");
    _lbMenu->setObjectName("label/Menu");
    _lbStatusBar = new QLabel("Status Bar");
    _lbStatusBar->setObjectName("label/StatusBar");
    _lbGame2D = new QLabel("Game 2D");
    _lbGame2D->setObjectName("label/Game 2D");
    _lbGame2D->setFrameStyle(QFrame::Panel);
    _lbGame2D->setFrameShadow(QFrame::Raised);
    _lbGame2D->setMinimumSize(240,240);
    _lbGame3D = new QLabel("Game 3D");
    _lbGame3D->setObjectName("label/Game 3D");
    _lbGame3D->setFrameStyle(QFrame::Panel);
    _lbGame3D->setFrameShadow(QFrame::Raised);
    _lbGame3D->setMinimumSize(240,240);
    _lbConsole = new QLabel("Console");
    _lbConsole->setObjectName("label/Console");
    _lbConsole->setFrameStyle(QFrame::Panel);
    _lbConsole->setFrameShadow(QFrame::Raised);

    _loGame->addWidget(_lbGame2D);
    _loGame->addWidget(_lbGame3D);
    _loGame->addWidget(_lbConsole);

    _loMain->addWidget(_lbMenu);
    _loMain->addLayout(_loGame);
    _loMain->addWidget(_lbStatusBar);
}

void
MainWidget::initGame() {
    qCDebug(mainWidget) << __FUNCTION__<<__LINE__;
    _g = new YGame();
    _g->setObjectName("game/Main");
    _g->setParent(this);
}//initGame
