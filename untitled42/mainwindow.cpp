#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>  //отображение изображений

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix1(":/resourec/img/Screenshot_1.jpg");
    int w1 = ui->image1->width();
    int h1 = ui->image1->height();
    ui->image1->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();

    if (login == "User" && password == "Qwerty") {
        QMessageBox::information(this, "Ура!!!", "Вы успешно авторизовались!");
        ui->statusbar->showMessage("Вы успешно авторизовались!");

    } else {
        QMessageBox::warning(this, "Увы!!!", "Вы не авторизовались!");
        ui->statusbar->showMessage("Вы не успешно авторизовались!");
    }
}
