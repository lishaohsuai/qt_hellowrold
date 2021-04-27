#ifndef FRAMESWITCHBUTTONS_H
#define FRAMESWITCHBUTTONS_H

#include <QMainWindow>

namespace Ui {
class FrameSwitchButtons;
}

class FrameSwitchButtons : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrameSwitchButtons(QWidget *parent = 0);
    ~FrameSwitchButtons();

private:
    Ui::FrameSwitchButtons *ui;
};

#endif // FRAMESWITCHBUTTONS_H
