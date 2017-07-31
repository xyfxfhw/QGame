#ifndef WELCOMEWIN_H
#define WELCOMEWIN_H

#include <QMainWindow>

namespace Ui {
class WelcomeWin;
}

class WelcomeWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomeWin(QWidget *parent = 0);
    ~WelcomeWin();

private:
    Ui::WelcomeWin *ui;
};

#endif // WELCOMEWIN_H
