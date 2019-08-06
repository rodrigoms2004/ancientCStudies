#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushBtnOK_clicked();

    void on_lineEditNome_textChanged(const QString &arg1);

    void on_pushBtnCancel_clicked();

private:
    Ui::MainDialog *ui;
};

#endif // MAINDIALOG_H
