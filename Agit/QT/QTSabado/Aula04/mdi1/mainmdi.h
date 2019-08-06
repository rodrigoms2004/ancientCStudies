#ifndef MAINMDI_H
#define MAINMDI_H

#include <QMainWindow>
#include <QMdiSubWindow>

namespace Ui {
class MainMDI;
}

class MainMDI : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMDI(QWidget *parent = 0);
    ~MainMDI();

private slots:
    void on_action_Novo_form1_triggered();

    void on_action_Cascata_triggered();

    void on_action_Lado_a_lado_triggered();

    void on_actionNovo_WebBrowser_triggered();

    void onDestroyWebBrowser();

private:
    Ui::MainMDI *ui;
    QMdiSubWindow *m_browser;
};

#endif // MAINMDI_H
