#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPushButton>

#include "subwidget.h"

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void ShowSub();
    void MySlot();

private:
    QPushButton b1;
    QPushButton* b2;
    SubWidget* sub;
};
#endif // MAINWIDGET_H
