/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *borrowbk;
    QLabel *timelabel;
    QPushButton *returnbk;
    QPushButton *searchbk;
    QPushButton *addbk;
    QPushButton *reader;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1198, 752);
        MainWindow->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/image/main.jpg)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 30, 761, 111));
        label->setMinimumSize(QSize(321, 71));
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 64pt \"\351\232\266\344\271\246\";\n"
"color: rgb(0, 0, 0)"));
        borrowbk = new QPushButton(centralWidget);
        borrowbk->setObjectName(QStringLiteral("borrowbk"));
        borrowbk->setGeometry(QRect(380, 190, 451, 61));
        borrowbk->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/image/pure.png);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        timelabel = new QLabel(centralWidget);
        timelabel->setObjectName(QStringLiteral("timelabel"));
        timelabel->setGeometry(QRect(550, 660, 131, 31));
        timelabel->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        returnbk = new QPushButton(centralWidget);
        returnbk->setObjectName(QStringLiteral("returnbk"));
        returnbk->setGeometry(QRect(380, 280, 451, 61));
        returnbk->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/pure.png);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        searchbk = new QPushButton(centralWidget);
        searchbk->setObjectName(QStringLiteral("searchbk"));
        searchbk->setGeometry(QRect(380, 370, 451, 61));
        searchbk->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/pure.png);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        addbk = new QPushButton(centralWidget);
        addbk->setObjectName(QStringLiteral("addbk"));
        addbk->setGeometry(QRect(380, 460, 451, 61));
        addbk->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/pure.png);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        reader = new QPushButton(centralWidget);
        reader->setObjectName(QStringLiteral("reader"));
        reader->setGeometry(QRect(380, 550, 451, 61));
        reader->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/pure.png);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237</p></body></html>", Q_NULLPTR));
        borrowbk->setText(QApplication::translate("MainWindow", "\345\200\237\351\230\205\344\271\246\347\261\215", Q_NULLPTR));
        timelabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        returnbk->setText(QApplication::translate("MainWindow", "\345\275\222\350\277\230\344\271\246\347\261\215", Q_NULLPTR));
        searchbk->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\344\271\246\347\261\215", Q_NULLPTR));
        addbk->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\344\271\246\347\261\215", Q_NULLPTR));
        reader->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214\350\257\273\350\200\205", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
