#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>  //отображение изображений
//#include "secondwindow.h"


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
    Q_UNUSED(arg1);
    if(ui->checkBox1->isChecked()) {
        ui->statusbar->showMessage("Галочка поставлена");
    } else {
        ui->statusbar->showMessage("Галочка не поставлена");
    }

}



void MainWindow::on_checkBox_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->checkBox->isChecked()) {
        QMessageBox::information(this,"Info","Галочка поставлена");
    } else {
        QMessageBox::information(this,"Info","Галочка не поставлена");
    }

}

void MainWindow::on_radioButton_5_clicked()
{
    QMessageBox::information(this,"Info","Выбрана первая");
}



void MainWindow::on_radioButton_6_clicked()
{
    QMessageBox::information(this,"Info","Выбрана вторая");
}


void MainWindow::on_action_triggered()
{
    ui->statusbar->showMessage("ПОЗДРАВЛЯЮ!!! Вы создали новое окно!!");
}


void MainWindow::on_action_hovered()
{
     ui->statusbar->showMessage("Вы точно хотите создать новый проект?");
}


void MainWindow::on_action_2_triggered()
{
    ui->statusbar->showMessage("Выберите путь к ранее созданному проекту...");
}


void MainWindow::on_action_3_hovered()
{
     ui->statusbar->showMessage("ОСТОРОЖНО!!! Нажатие приведет к закрытию приложения");
}

void MainWindow::on_action_3_triggered()
{
    QApplication::quit();
}


void MainWindow::on_action_6_triggered()
{
    //hide();
    window = new SecondWindow(this);
    window->show();
    /*SecondWindow sec_win;
    sec_win.setModal(true);
    sec_win.exec();*/

}

