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
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Вопрос", "Вы будите гулять?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        qDebug() << "Кнопка НЕТ была нажата";
    }


}

