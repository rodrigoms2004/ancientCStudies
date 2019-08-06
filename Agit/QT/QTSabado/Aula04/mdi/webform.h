#ifndef WEBFORM_H
#define WEBFORM_H

#include <QWidget>

namespace Ui {
class WebForm;
}

class WebForm : public QWidget
{
    Q_OBJECT

public:
    explicit WebForm(QWidget *parent = 0);
    ~WebForm();

private:
    Ui::WebForm *ui;
};

#endif // WEBFORM_H
