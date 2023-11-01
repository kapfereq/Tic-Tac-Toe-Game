#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void PlayAgainButtonClicked();
    void LeaveButtonClicked();
private:
    Ui::MainWindow *ui;
    int moves = 0;
    void checkAndUpdateAllMovesDone();
    char board[3][3]; // 3x3 board to represent the game state

    // Declare the function to check for a winner
    void checkForWinner();
};
#endif // MAINWINDOW_H
