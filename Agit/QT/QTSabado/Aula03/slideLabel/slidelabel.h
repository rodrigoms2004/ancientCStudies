#ifndef SLIDELABEL_H
#define SLIDELABEL_H

#include <QWidget>

namespace Ui {
class slideLabel;
}

class slideLabel : public QWidget
{
    Q_OBJECT

public:
    explicit slideLabel(QWidget *parent = 0);
    ~slideLabel();

private slots:


private:
    Ui::slideLabel *ui;
};

#endif // SLIDELABEL_H
