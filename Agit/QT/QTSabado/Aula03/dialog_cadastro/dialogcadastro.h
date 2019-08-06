#ifndef DIALOGCADASTRO_H
#define DIALOGCADASTRO_H

#include <QDialog>

namespace Ui {
class dialogCadastro;
}

class dialogCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit dialogCadastro(QWidget *parent = 0);
    ~dialogCadastro();

private slots:
    void on_pushButtonCancelar_clicked();

private:
    Ui::dialogCadastro *ui;
};

#endif // DIALOGCADASTRO_H
