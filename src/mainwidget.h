#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
class QVBoxLayout;
class QHBoxLayout;
class QLabel;

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
};
#endif // MAINWIDGET_H
