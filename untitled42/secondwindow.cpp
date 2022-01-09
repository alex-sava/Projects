#include <QMessageBox>
#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/resourec/img/audi.png"),"Audi");
    ui->listWidget->addItem(item_1);
    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/resourec/img/bmw.png"),"BMW");
    ui->listWidget->addItem(item_2);
    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/resourec/img/volvo.png"),"Volvo");
    ui->listWidget->addItem(item_3);
    QListWidgetItem *item_4 = new QListWidgetItem(QIcon(":/resourec/img/ford.png"),"Ford");
    ui->listWidget->addItem(item_4);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
    QString marka = ui->listWidget->currentItem()->text();
    QMessageBox::about(this, "Марка машины:", marka);
    ui->listWidget->currentItem()->setBackground(Qt::blue);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}

