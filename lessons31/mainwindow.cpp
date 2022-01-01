#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::about(this, "Заголовок", "Просто текст внутри");
    //QMessageBox::aboutQt(this, "Заголовок");
    //QMessageBox::critical(this, "Внимание", "Ошибка данных");
    //QMessageBox::information(this, "Информация", "Будьте осторожны!");
    //QMessageBox::warning(this, "Предупреждение", "Будьте осторожны!");

    QMessageBox::StandardButton answer = QMessageBox::question(this, "Опрос:", "У вас есть машина?");

    if (answer==QMessageBox::Yes){
        QMessageBox::information(this, "ОКОШКО","Поздравляем вас!!! У вас есть автомобиль, урааа!");
    }
    else {
        QMessageBox::warning(this, "ОКОШКО","У вас пока нет машины, но мы уверены, что скоро она появится");
    }

}

