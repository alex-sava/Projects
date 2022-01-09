/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_2;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pass;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *input_text;
    QPushButton *Enter;
    QProgressBar *progressBar;
    QPushButton *pushButton_2;
    QCheckBox *checkBox1;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QCheckBox *checkBox;
    QLabel *image1;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1039, 533);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourec/img/qt_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourec/img/qt_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon1);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_2->setCheckable(false);
        action_2->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resourec/img/qt_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 61, 251, 92));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        login = new QLineEdit(layoutWidget);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout_2->addWidget(login);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pass = new QLineEdit(layoutWidget);
        pass->setObjectName(QString::fromUtf8("pass"));

        horizontalLayout->addWidget(pass);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 230, 251, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        input_text = new QLineEdit(layoutWidget1);
        input_text->setObjectName(QString::fromUtf8("input_text"));

        horizontalLayout_3->addWidget(input_text);


        verticalLayout_2->addLayout(horizontalLayout_3);

        Enter = new QPushButton(layoutWidget1);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Enter);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 180, 211, 21));
        progressBar->setMinimum(0);
        progressBar->setMaximum(100);
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 650, 136, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        checkBox1 = new QCheckBox(groupBox);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
        checkBox1->setGeometry(QRect(314, 615, 76, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 300, 143, 226));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(184, 540, 181, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"opacity:0.1;\n"
"text-align:center;\n"
"font-family:  arial;"));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(253, 601, 57, 52));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_3 = new QRadioButton(layoutWidget2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_3->addWidget(radioButton_4);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(191, 601, 58, 52));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_4->addWidget(radioButton_2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 300, 201, 201));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:red;\n"
"\n"
"background-color:blue;\n"
""));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(0, 580, 89, 20));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(0, 600, 89, 20));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(0, 630, 75, 20));

        gridLayout->addWidget(groupBox, 0, 2, 1, 1);

        image1 = new QLabel(centralwidget);
        image1->setObjectName(QString::fromUtf8("image1"));
        image1->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(image1, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1039, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addAction(action_3);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_2->addAction(action_7);
        menu_2->addSeparator();
        mainToolBar->addAction(action);
        mainToolBar->addAction(action_2);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\275\320\276\320\262\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275   ", nullptr));
        login->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Info for StatusBar", nullptr));
        input_text->setText(QString());
        Enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 Radoi_Button", nullptr));
        checkBox1->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<b>\320\243\320\240\320\220</b>\n"
"<h1>\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 4</h1>\n"
"\320\237\321\200\320\276\321\201\321\202\320\276 \321\202\320\265\320\272\321\201\321\202 <em>\320\272\321\203\321\200\321\201\320\270\320\262\320\276\320\274</em>\n"
"<hr>\n"
"<ul>\n"
"<li>\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 4</li>\n"
"<li>\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 5</li>\n"
"</ul>\n"
"<ol>\n"
"<li>\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 4</li>\n"
"<li>\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 5</li>\n"
"</ol>\n"
"<hr>\n"
"", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "sdfadsfadsf", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\210\320\260", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\202\321\217", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\200\320\272", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\266\320\276\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\260\321\217", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\260\321\217", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\320\272-\320\261\320\276\320\272\321\201", nullptr));
        image1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\272\320\275\320\276", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
