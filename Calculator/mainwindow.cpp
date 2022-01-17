#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

double num_first = 0; //первое число ввода

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Калькулятор");
    ui->result_show->setText(""); //очистка поля ввода

    connect(ui->pushButton_0,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()), this, SLOT(digits_numbers()));

    connect(ui->pushButton_plus_minus,SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_percent,SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->pushButton_minus,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_mult,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_divide,SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->pushButton_divide->setCheckable(true); //разрешение на установку setChecked, кнопка-триггер
    ui->pushButton_mult->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers() {

    QPushButton *button = (QPushButton *)sender();
    double all_numbers = 0;
    QString new_label;

    // Все будет работать только когда введено менее 10 цифр
    if(ui->result_show->text().length() < 10) {
        if (ui->result_show->text().contains('.') && (button->text() == '0')) {
            new_label = ui->result_show->text() + button->text();
        } else {
            all_numbers = (ui->result_show->text() + button->text()).toDouble();
            new_label = QString::number(all_numbers,'g',12);
        }
        ui->result_show->setText(new_label);
    } else {
        QMessageBox::warning(this, "Предупреждение!", "Очень большое число, попробуйте еще раз!");
        ui->result_show->setText(""); //очистка поля ввода
    }
}

void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->result_show->text().contains('.'))) {
        ui->result_show->setText(ui->result_show->text() + '.');
    }
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers = 0;
    QString new_label;

    if(button->text() == "+/-") {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * (-1);
    } else if (button->text() == "%") {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * 0.01;
    }
    new_label = QString::number(all_numbers, 'g', 12);
    ui->result_show->setText(new_label);
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();

    num_first = ui->result_show->text().toDouble();
    ui->result_show->setText("");
    button->setChecked(true);

    if(ui->pushButton_plus->isChecked()) {
        ui->bottom_label->setText(QString::number(num_first) + "+");
    } else if(ui->pushButton_minus->isChecked()) {
        ui->bottom_label->setText(QString::number(num_first) + "-");
    } else if(ui->pushButton_divide->isChecked()) {
        ui->bottom_label->setText(QString::number(num_first) + "/");
    } else if(ui->pushButton_mult->isChecked()){
        ui->bottom_label->setText(QString::number(num_first) + "*");
    }
}

void MainWindow::on_pushButton_equal_clicked()
{
    double labelNumber, num_second;
    QString new_label;

    num_second = ui->result_show->text().toDouble();

    if(ui->pushButton_plus->isChecked()) {
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 12);
        ui->result_show->setText(new_label);
        ui->bottom_label->setText(QString::number(num_first) + "+" + QString::number(num_second) + "=" + new_label);
        ui->pushButton_plus->setChecked(false);

    } else if(ui->pushButton_minus->isChecked()) {
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 12);
        ui->result_show->setText(new_label);
        ui->bottom_label->setText(QString::number(num_first) + "-" + QString::number(num_second) + "=" + new_label);
        ui->pushButton_minus->setChecked(false);

    } else if(ui->pushButton_divide->isChecked()) {
        if (num_second == 0) {
            ui->result_show->setText("0");
            QMessageBox::warning(this, "Предупреждение!", "НЮ-НЮ-НЮ! Делить на ноль нельзя!");
            ui->bottom_label->setText(""); // очистка поля первого числа
            ui->bottom_label->setText(QString::number(num_first) + "/" + QString::number(num_second) + "=" + "Кол тебе!!!");
        } else {
            labelNumber = num_first / num_second;
            new_label = QString::number(labelNumber, 'g', 12);
            ui->result_show->setText(new_label);
            ui->bottom_label->setText(QString::number(num_first) + "/" + QString::number(num_second) + "=" + new_label);
        }
        ui->pushButton_divide->setChecked(false);

    } else if(ui->pushButton_mult->isChecked()){
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 12);
        ui->result_show->setText(new_label);
        ui->bottom_label->setText(QString::number(num_first) + "*" + QString::number(num_second) + "=" + new_label);
        ui->pushButton_mult->setChecked(false);
    }
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_mult->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    ui->result_show->setText("0");
    ui->bottom_label->setText(""); // очистка поля первого числа
}



