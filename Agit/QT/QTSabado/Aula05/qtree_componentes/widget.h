#ifndef WIDGET_H
#define WIDGET_H
#include <QListWidget>
#include <QTreeWidget>
#include <QTableWidget>
#include <QLineEdit>

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QListWidget *qList1;
    QTreeWidget *qTree1;
    QTableWidget *qTable1;
    QLineEdit *qLine1;

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

