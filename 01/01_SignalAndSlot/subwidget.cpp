#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    b = new QPushButton(this);
    b->setText("切回主窗口");

    // 子窗口按钮绑定发射信号
    connect(b, &QPushButton::pressed, this, &SubWidget::ShowMain);
}

void SubWidget::ShowMain()
{
    emit MySignal();
}


