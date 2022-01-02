#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include "thirdwindow.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondWindow *ui;
    ThirdWindow *window2;
};

#endif // SECONDWINDOW_H
