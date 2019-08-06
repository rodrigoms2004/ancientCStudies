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
    void on_actionNovo_Form1_triggered();

    void on_actionNovo_WebForm_triggered();

    void on_actionSair_2_triggered();

    void on_actionCascata_triggered();

    void on_actionLado_a_lado_triggered();

    void on_actionModo_Janela_triggered();

    void on_actionModo_Tabbed_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
