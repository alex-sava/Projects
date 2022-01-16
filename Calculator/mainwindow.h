#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digits_numbers(); //отработки нажатий цифр
    void on_pushButton_dot_clicked(); //добавление точки
    void operations(); //отработка действий +/-, %
    void on_pushButton_clear_clicked(); //отработка очистки поля
    void on_pushButton_equal_clicked(); //вывод результата
    void math_operations(); //отработка математических действия +, -, *, /
};
#endif // MAINWINDOW_H
