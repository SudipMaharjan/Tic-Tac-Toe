#include "home.h"
#include "ui_home.h"
#include "game.h"

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    connect(ui->pushButtonNewGame,&QPushButton::clicked,this,&Home::newGame);
    connect(ui->pushButtonExit,&QPushButton::clicked,this,&Home::exit);
}

Home::~Home()
{
    delete ui;
}

void Home::newGame()
{
    Game* new_game = new Game();
    new_game->show();
}


void Home::exit()
{
    QCoreApplication::quit();
}

