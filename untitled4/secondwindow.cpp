#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
    //SecondWindow sec_win;
    //sec_win.setModal(true);
    //sec_win.exec();

    hide();
    window2 = new ThirdWindow(this);
    window2->show();
}

