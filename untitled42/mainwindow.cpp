#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>  //отображение изображений


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix1(":/resourec/img/bWyA9.png");
    int w1 = ui->image1->width();
    int h1 = ui->image1->height();
    ui->image1->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug()<<"Delete ui";
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

void MainWindow::on_Enter_clicked()
{
    QString user_input = ui->input_text->text();
    ui->statusbar->showMessage(user_input);
}

/*void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    QString user_input = ui->input_text->text();
    ui->statusbar->showMessage(user_input);
}*/


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->radioButton->isChecked()) {
        ui->statusbar->showMessage("Выбран Марк");
    }
    if(ui->radioButton_2->isChecked()) {
        ui->statusbar->showMessage("Выбран Джон");
    }
}


void MainWindow::on_checkBox1_stateChanged(int arg1)
{
    if(ui->checkBox1->isChecked()) {
        ui->statusbar->showMessage("Галочка поставлена");
    } else {
        ui->statusbar->showMessage("Галочка не поставлена");
    }

}

