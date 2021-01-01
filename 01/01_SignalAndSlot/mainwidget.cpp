#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("你猜猜我是谁");

    // b1 按钮
    b1.setParent(this);
    b1.setText("显示");

    // b2 按钮
    b2 = new QPushButton(this);
    b2->setText("123");
    b2->move(50, 50);

    // 初始话子窗口
    sub = new SubWidget;
    // 为b1绑定信号与槽操作
    connect(&b1, &QPushButton::pressed, this, &MainWidget::ShowSub);

    // 为b2绑定信号与槽操作
    connect(b2, &QPushButton::pressed, this, &MainWidget::close);

    // 接收子窗口信号
    connect(sub, &SubWidget::MySignal, this, &MainWidget::MySlot);

}

MainWidget::~MainWidget()
{
    delete b2;
    delete sub;
}

void MainWidget::ShowSub()
{
    // 子窗口显示
    sub->show();
    // 父窗口隐藏
    this->hide();
}

void MainWidget::MySlot()
{
    // 子窗口隐藏
    sub->hide();
    // 父窗口显示
    this->show();
}

