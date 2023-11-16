#ifndef GAME_H
#define GAME_H

#include <QWidget>

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();
    void make_move(int, char);
    void check_winner();
    void check_draw();
    void reset_game();
    bool has_winner();
    void pushButton1();
    void pushButton2();
    void pushButton3();
    void pushButton4();
    void pushButton5();
    void pushButton6();
    void pushButton7();
    void pushButton8();
    void pushButton9();

private:
    Ui::Game *ui;
    bool turn;
    char place[3][3];
};

#endif // GAME_H
