#include <QMessageBox>
#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    QString words[] = {"Alex", "John", "Josh", "Tom", "Bob"};

    for (int number = 0; number < 5; number++) {
        ui->listWidget->addItem(words[number]);
    }
    QListWidgetItem *item_6 = new QListWidgetItem(QIcon(":/resourec/img/audi.png"),"Audi");
    ui->listWidget->addItem(item_6);
    QListWidgetItem *item_7 = new QListWidgetItem(QIcon(":/resourec/img/bmw.png"),"BMW");
    ui->listWidget->addItem(item_7);
    QListWidgetItem *item_8 = new QListWidgetItem(QIcon(":/resourec/img/volvo.png"),"Volvo");
    ui->listWidget->addItem(item_8);
    QListWidgetItem *item_9 = new QListWidgetItem(QIcon(":/resourec/img/ford.png"),"Ford");
    ui->listWidget->addItem(item_9);
    ui->listWidget->addItem("...и т.д.");
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


/*void SecondWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    Q_UNUSED(previous);
    QMessageBox::information(this, "Окно", current->text());
}*/

