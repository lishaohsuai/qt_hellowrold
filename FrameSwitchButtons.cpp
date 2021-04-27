#include "FrameSwitchButtons.h"
#include "ui_FrameSwitchButtons.h"
#include "SwitchButton.h"
#include "qlabel.h"
FrameSwitchButtons::FrameSwitchButtons(QWidget *parent) :
    QMainWindow(parent)
{
//    ui->setupUi(this);
    QWidget * qw = new QWidget();

    QHBoxLayout * layout = new QHBoxLayout();
    SwitchButton * bt1 = new SwitchButton();
    SwitchButton * bt2 = new SwitchButton();
    bt1->setStyleSheet("SwitchButton{ min-width: 64px; max-width: 64px; min-height: 28px; max-height: 28px; qproperty-alignment: AlignCenter; margin-left: 12px;}");
    bt2->setStyleSheet("SwitchButton{ min-width: 64px; max-width: 64px; min-height: 28px; max-height: 28px; qproperty-alignment: AlignCenter; margin-left: 12px;}");
    layout->addWidget(bt1);
    layout->addWidget(bt2);
    qw->setLayout(layout);
    //设置标题
   this->setWindowTitle(tr("hello"));
   //设置客户区大小
   this->resize(1000, 800);
   //设置背景颜色
//   QPalette palette = this->palette();  //获取调色板
//   palette.setColor(QPalette::Window, QColor(255, 0, 255));  //设置为白色
//   this->setPalette(palette);  //重新设置调色板
   //添加QLabel控件
   QLabel *label = new QLabel(this);  //创建QLabel控件
   this->setCentralWidget(qw);  //将当前控件至于中央
   //this->setLayout(layout);
   label->setText(tr("Hello World!"));  //设置控件文本
   label->setAlignment(Qt::AlignCenter);  //文本水平和垂直都居中
}

FrameSwitchButtons::~FrameSwitchButtons()
{
    delete ui;
}
