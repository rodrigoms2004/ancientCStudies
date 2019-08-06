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

    void on_pshBtn_0_clicked();

    void on_pshBtn_1_clicked();

    void on_pshBtn_2_clicked();

    void on_pshBtn_3_clicked();

    void on_pshBtn_4_clicked();

    void on_pshBtn_5_clicked();

    void on_pshBtn_6_clicked();

    void on_pshBtn_7_clicked();

    void on_pshBtn_8_clicked();

    void on_pshBtn_9_clicked();

    void on_pshBtnPonto_clicked();

    void on_pshBtn_Div_clicked();

    void on_pshBtn_Mult_clicked();

    void on_pshBtn_Sub_clicked();

    void on_pshBtn_Soma_clicked();

    void on_pshBtnClear_clicked();
    void on_pshBtnCalcular_clicked();

private:
    Ui::MainWindow *ui;

    double valorAnterior = 0;

    void setOperacao(QString operacao);

    void setNumero(QString numero);

};

#endif // MAINWINDOW_H
