#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushBtnDiv_clicked();

    void on_pushBtnMult_clicked();

    void on_pushBtnSub_clicked();

    void on_pushBtnSoma_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
