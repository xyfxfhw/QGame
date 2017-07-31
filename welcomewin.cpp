#include "welcomewin.h"
#include "ui_welcomewin.h"

WelcomeWin::WelcomeWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WelcomeWin)
{
    ui->setupUi(this);
}

WelcomeWin::~WelcomeWin()
{
    delete ui;
}
