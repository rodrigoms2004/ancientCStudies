#ifndef FORM1_H
#define FORM1_H

#include <QDialog>

namespace Ui {
class form1;
}

class form1 : public QDialog
{
    Q_OBJECT

public:
    explicit form1(QWidget *parent = 0);
    ~form1();

private:
    Ui::form1 *ui;
};

#endif // FORM1_H
