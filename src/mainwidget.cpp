#include "mainwidget.h"
#include <QtWidgets>


Q_LOGGING_CATEGORY(mainWidget, "main.widget")

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent) {
    initLayout();
    //dumpObjectTree();
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
    _lbGame3D = new QLabel("Game 3D");
    _lbGame3D->setObjectName("label/Game 3D");
    _lbConsole = new QLabel("Console");
    _lbConsole->setObjectName("label/Console");

    _loGame->addWidget(_lbGame2D);
    _loGame->addWidget(_lbGame3D);
    _loGame->addWidget(_lbConsole);

    _loMain->addWidget(_lbMenu);
    _loMain->addLayout(_loGame);
    _loMain->addWidget(_lbStatusBar);
}
