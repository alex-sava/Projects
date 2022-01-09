#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Enter_clicked();

    //void on_lineEdit_2_textEdited(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_checkBox1_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_action_triggered();

    void on_action_hovered();

    void on_action_2_triggered();

    void on_action_3_hovered();

    void on_action_3_triggered();

    void on_action_6_triggered();

private:
    Ui::MainWindow *ui;
    SecondWindow *window;
};
#endif // MAINWINDOW_H
