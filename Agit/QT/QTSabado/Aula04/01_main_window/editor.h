#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>

namespace Ui {
class Editor;
}

class Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = 0);
    ~Editor();

private:
    Ui::Editor *ui;

private slots:
    void on_actionSobre();
};

#endif // EDITOR_H
