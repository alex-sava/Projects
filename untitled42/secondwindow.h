#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
//#include <QListWidgetItem>

#include <QDialog>

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

    //void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
