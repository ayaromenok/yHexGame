#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QLoggingCategory>

class QVBoxLayout;
class QHBoxLayout;
class QLabel;
class YGame;

Q_DECLARE_LOGGING_CATEGORY(mainWidget)

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    void initLayout();
    QVBoxLayout*    _loMain;
    QHBoxLayout*    _loGame;
    QLabel*         _lbMenu;
    QLabel*         _lbStatusBar;
    QLabel*         _lbGame2D;
    QLabel*         _lbGame3D;
    QLabel*         _lbConsole;

    void initGame();
    YGame*          _g;
};
#endif // MAINWIDGET_H
