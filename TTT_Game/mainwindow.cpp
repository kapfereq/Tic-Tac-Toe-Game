#include "mainwindow.h"
#include "./ui_mainwindow.h"

char currentplayersymbol = 'X';

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Initialize the board to empty
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    ui->PlayAgainButton->hide();
    ui->LeaveButton->hide();
    connect(ui->PlayAgainButton, SIGNAL(clicked()), this, SLOT(PlayAgainButtonClicked()));
    connect(ui->LeaveButton, SIGNAL(clicked()), this, SLOT(LeaveButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    if(ui->pushButton_1->isEnabled()){
        board[0][0] = currentplayersymbol;
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_1->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_1->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_1->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    board[0][1] = currentplayersymbol;
    if(ui->pushButton_2->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_2->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_2->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_2->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    board[0][2] = currentplayersymbol;
    if(ui->pushButton_3->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_3->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_3->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_3->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    board[1][0] = currentplayersymbol;
    if(ui->pushButton_4->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_4->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_4->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_4->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    board[1][1] = currentplayersymbol;
    if(ui->pushButton_5->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_5->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_5->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_5->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    board[1][2] = currentplayersymbol;
    if(ui->pushButton_6->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_6->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_6->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_6->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    board[2][0] = currentplayersymbol;
    if(ui->pushButton_7->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_7->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_7->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_7->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    board[2][1] = currentplayersymbol;
    if(ui->pushButton_8->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_8->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_8->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_8->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    board[2][2] = currentplayersymbol;
    if(ui->pushButton_9->isEnabled()){
        if (currentplayersymbol == 'X') {
            QPixmap pixmap(":/x.png");
            ui->pushButton_9->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's O turn.");
            currentplayersymbol = 'O';
        }
        else {
            QPixmap pixmap(":/circle.png");
            ui->pushButton_9->setIcon(QIcon(pixmap));
            ui->currentplayersymbol->setText("Player's X turn.");
            currentplayersymbol = 'X';
        }
        ui->pushButton_9->setEnabled(false);
        moves++;
        checkAndUpdateAllMovesDone();
    }
}

void MainWindow::checkAndUpdateAllMovesDone()
{
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            // Horizontal win
            ui->currentplayersymbol_2->setText("Player " + QString(board[i][0]) + " wins!");
            ui->currentplayersymbol->setText("Game's over!");
            for (int i = 1; i <= 9; i++) {
                QPushButton* button = findChild<QPushButton*>("pushButton_" + QString::number(i));
                if (button) {
                    button->setEnabled(false);
                }
            }
            ui->PlayAgainButton->show();
            ui->LeaveButton->show();
            return;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            // Vertical win
            ui->currentplayersymbol_2->setText("Player " + QString(board[0][i]) + " wins!");
            ui->currentplayersymbol->setText("Game's over!");
            for (int i = 1; i <= 9; i++) {
                QPushButton* button = findChild<QPushButton*>("pushButton_" + QString::number(i));
                if (button) {
                    button->setEnabled(false);
                }
            }
            ui->PlayAgainButton->show();
            ui->LeaveButton->show();
            return;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        // Diagonal win
        ui->currentplayersymbol_2->setText("Player " + QString(board[1][1]) + " wins!");
        ui->currentplayersymbol->setText("Game's over!");
        for (int i = 1; i <= 9; i++) {
            QPushButton* button = findChild<QPushButton*>("pushButton_" + QString::number(i));
            if (button) {
                button->setEnabled(false);
            }
        }
        ui->PlayAgainButton->show();
        ui->LeaveButton->show();
        return;
    }
    if (moves >= 9) {
        ui->currentplayersymbol->setText("Game's over!");
        ui->currentplayersymbol_2->setText("It's a draw!");
        ui->PlayAgainButton->show();
        ui->LeaveButton->show();
    }
}

void MainWindow::PlayAgainButtonClicked() {
    // Reset the game (clear the board, enable buttons)
    for (int i = 1; i <= 9; i++) {
        QPushButton* button = findChild<QPushButton*>("pushButton_" + QString::number(i));
        if (button) {
            button->setIcon(QIcon()); // Clear button icons
            button->setEnabled(true);   // Enable buttons
        }
    }
    // Clear the board array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    // Reset the current player
    currentplayersymbol = 'X';
    ui->currentplayersymbol_2->setText("");
    // Clear the moves count
    moves = 0;
    // Update the status label
    ui->currentplayersymbol->setText("Player's X turn");

    // Hide the "Play again" and "Leave" buttons
    ui->PlayAgainButton->hide();
    ui->LeaveButton->hide();
}

void MainWindow::LeaveButtonClicked() {
    qApp->quit(); // Close the application
}
