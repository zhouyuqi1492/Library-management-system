/********************************************************************************
** Form generated from reading UI file 'search_reserve.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_RESERVE_H
#define UI_SEARCH_RESERVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search_reserve
{
public:
    QLineEdit *license_text;
    QLineEdit *ISBN_text;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *search_reserve)
    {
        if (search_reserve->objectName().isEmpty())
            search_reserve->setObjectName(QStringLiteral("search_reserve"));
        search_reserve->resize(680, 524);
        search_reserve->setStyleSheet(QStringLiteral("#search_reserve{background-image: url(:/new/prefix1/image/other.jpg);}"));
        license_text = new QLineEdit(search_reserve);
        license_text->setObjectName(QStringLiteral("license_text"));
        license_text->setGeometry(QRect(270, 190, 191, 41));
        license_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        ISBN_text = new QLineEdit(search_reserve);
        ISBN_text->setObjectName(QStringLiteral("ISBN_text"));
        ISBN_text->setGeometry(QRect(270, 280, 191, 41));
        ISBN_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        label = new QLabel(search_reserve);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 190, 151, 41));
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(search_reserve);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 280, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        pushButton = new QPushButton(search_reserve);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 400, 111, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"background:rgb(248, 248, 248);\n"
""));
        pushButton_2 = new QPushButton(search_reserve);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 400, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"background:rgb(248, 248, 248);\n"
"\n"
""));

        retranslateUi(search_reserve);

        QMetaObject::connectSlotsByName(search_reserve);
    } // setupUi

    void retranslateUi(QWidget *search_reserve)
    {
        search_reserve->setWindowTitle(QApplication::translate("search_reserve", "Form", Q_NULLPTR));
        license_text->setPlaceholderText(QApplication::translate("search_reserve", "licenseid", Q_NULLPTR));
        ISBN_text->setPlaceholderText(QApplication::translate("search_reserve", "ISBN", Q_NULLPTR));
        label->setText(QApplication::translate("search_reserve", "\350\257\273\350\200\205\350\257\201\344\273\266\350\276\223\345\205\245\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("search_reserve", "ISBN\350\276\223\345\205\245\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("search_reserve", "\344\271\246\347\261\215\345\200\237\351\230\205", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("search_reserve", "\344\271\246\347\261\215\351\242\204\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class search_reserve: public Ui_search_reserve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_RESERVE_H
