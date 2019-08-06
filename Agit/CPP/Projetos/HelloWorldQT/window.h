#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class QProgressBar;
class QSlider;
class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);
    ~Window();

private slots:
    void slotButtonClicked(bool checked);
    void aboutQT();

private:
    QPushButton *m_button;
    QPushButton *checked_button;
    QPushButton *buttonInfo;
    QProgressBar *progressBar;
    QSlider *slider;
    int m_counter;

signals:
    void counterReached();

public slots:
};

#endif // WINDOW_H
