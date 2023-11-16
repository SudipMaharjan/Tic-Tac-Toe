#include "game.h"
#include "ui_game.h"
#include<QMessageBox>

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game),turn(true)
{
    ui->setupUi(this);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Game::pushButton1);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Game::pushButton2);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Game::pushButton3);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Game::pushButton4);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Game::pushButton5);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Game::pushButton6);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Game::pushButton7);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Game::pushButton8);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Game::pushButton9);
}

Game::~Game()
{
    delete ui;
}

void Game::pushButton1(){
    if(ui->pushButton_1->text().isEmpty()){
        if(turn==1){
            ui->pushButton_1->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_1->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton2(){
    if(ui->pushButton_2->text().isEmpty()){
        if(turn==1){
            ui->pushButton_2->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_2->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton3(){
    if(ui->pushButton_3->text().isEmpty()){
        if(turn==1){
            ui->pushButton_3->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_3->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton4(){
    if(ui->pushButton_4->text().isEmpty()){
        if(turn==1){
            ui->pushButton_4->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_4->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton5(){
    if(ui->pushButton_5->text().isEmpty()){
        if(turn==1){
            ui->pushButton_5->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_5->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton6(){
    if(ui->pushButton_6->text().isEmpty()){
        if(turn==1){
            ui->pushButton_6->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_6->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton7(){
    if(ui->pushButton_7->text().isEmpty()){
        if(turn==1){
            ui->pushButton_7->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_7->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton8(){
    if(ui->pushButton_8->text().isEmpty()){
        if(turn==1){
            ui->pushButton_8->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_8->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

void Game::pushButton9(){
    if(ui->pushButton_9->text().isEmpty()){
        if(turn==1){
            ui->pushButton_9->setText("X");
            turn =!turn;
        }
        else{
            ui->pushButton_9->setText("O");
            turn =!turn;
        }
        check_winner();
        check_draw();
    }
}

bool Game::has_winner(){
    bool winner=false;
    if(ui->pushButton_1->text()==ui->pushButton_2->text() && ui->pushButton_1->text()==ui->pushButton_3->text() && !ui->pushButton_1->text().isEmpty()) winner=true;
    else if(ui->pushButton_4->text()==ui->pushButton_5->text() && ui->pushButton_4->text()==ui->pushButton_6->text() && !ui->pushButton_4->text().isEmpty()) winner=true;
    else if(ui->pushButton_7->text()==ui->pushButton_8->text() && ui->pushButton_7->text()==ui->pushButton_9->text() && !ui->pushButton_7->text().isEmpty()) winner=true;
    else if(ui->pushButton_1->text()==ui->pushButton_5->text() && ui->pushButton_1->text()==ui->pushButton_9->text() && !ui->pushButton_1->text().isEmpty()) winner=true;
    else if(ui->pushButton_3->text()==ui->pushButton_5->text() && ui->pushButton_3->text()==ui->pushButton_7->text() && !ui->pushButton_3->text().isEmpty()) winner=true;
    else if(ui->pushButton_1->text()==ui->pushButton_4->text() && ui->pushButton_1->text()==ui->pushButton_7->text() && !ui->pushButton_1->text().isEmpty()) winner=true;
    else if(ui->pushButton_2->text()==ui->pushButton_5->text() && ui->pushButton_2->text()==ui->pushButton_8->text() && !ui->pushButton_2->text().isEmpty()) winner=true;
    else if(ui->pushButton_3->text()==ui->pushButton_6->text() && ui->pushButton_3->text()==ui->pushButton_9->text() && !ui->pushButton_3->text().isEmpty()) winner=true;

    return winner;
}

void Game::check_winner(){
    if(has_winner() && turn==1){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            nullptr,
            "Winner",
            "O has won the game. Play again?",
            QMessageBox::Yes | QMessageBox::No
        );
        if (reply == QMessageBox::Yes) {
            reset_game();
        }
        else {
            this->close();
        }
    }

    if(has_winner() && turn==0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            nullptr,
            "Winner",
            "X has won the game. Play again?",
            QMessageBox::Yes | QMessageBox::No
        );
        if (reply == QMessageBox::Yes) {
            reset_game();
        }
        else {
            this->close();
        }
    }
}

void Game::reset_game(){
    ui->pushButton_1->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
    turn=1;
}

void Game::check_draw(){

    if( !ui->pushButton_1->text().isEmpty() &&
        !ui->pushButton_2->text().isEmpty() &&
        !ui->pushButton_3->text().isEmpty() &&
        !ui->pushButton_4->text().isEmpty() &&
        !ui->pushButton_5->text().isEmpty() &&
        !ui->pushButton_6->text().isEmpty() &&
        !ui->pushButton_7->text().isEmpty() &&
        !ui->pushButton_8->text().isEmpty() &&
        !ui->pushButton_9->text().isEmpty() &&
        !has_winner())
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            nullptr,
            "No Winner",
            "Play again?",
            QMessageBox::Yes | QMessageBox::No
        );
        if (reply == QMessageBox::Yes) {
            reset_game();
        }
        else {
            this->close();
        }
    }
}
