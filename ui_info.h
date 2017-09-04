/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QPushButton *search_for_info;
    QPushButton *search_for_num;
    QPushButton *search_for_reader;
    QLineEdit *info_text;
    QLineEdit *ISBN_text;
    QLineEdit *code_text;

    void setupUi(QWidget *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QStringLiteral("info"));
        info->resize(593, 562);
        info->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/image/other.jpg)"));
        search_for_info = new QPushButton(info);
        search_for_info->setObjectName(QStringLiteral("search_for_info"));
        search_for_info->setGeometry(QRect(320, 160, 161, 51));
        search_for_info->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"background:rgb(248, 248, 248)"));
        search_for_num = new QPushButton(info);
        search_for_num->setObjectName(QStringLiteral("search_for_num"));
        search_for_num->setGeometry(QRect(320, 260, 161, 51));
        search_for_num->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
""));
        search_for_reader = new QPushButton(info);
        search_for_reader->setObjectName(QStringLiteral("search_for_reader"));
        search_for_reader->setGeometry(QRect(320, 370, 161, 51));
        search_for_reader->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"background:rgb(248, 248, 248)"));
        info_text = new QLineEdit(info);
        info_text->setObjectName(QStringLiteral("info_text"));
        info_text->setGeometry(QRect(120, 160, 191, 51));
        info_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        ISBN_text = new QLineEdit(info);
        ISBN_text->setObjectName(QStringLiteral("ISBN_text"));
        ISBN_text->setGeometry(QRect(120, 260, 191, 51));
        ISBN_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        code_text = new QLineEdit(info);
        code_text->setObjectName(QStringLiteral("code_text"));
        code_text->setGeometry(QRect(120, 370, 191, 51));
        code_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QWidget *info)
    {
        info->setWindowTitle(QApplication::translate("info", "Form", Q_NULLPTR));
        search_for_info->setText(QApplication::translate("info", "\346\237\245\350\257\242\345\233\276\344\271\246\344\277\241\346\201\257", Q_NULLPTR));
        search_for_num->setText(QApplication::translate("info", "\346\237\245\350\257\242\344\271\246\347\261\215\345\255\230\345\202\250\351\207\217", Q_NULLPTR));
        search_for_reader->setText(QApplication::translate("info", "\346\237\245\350\257\242\350\257\273\350\200\205\345\200\237\351\230\205\346\203\205\345\206\265", Q_NULLPTR));
        info_text->setPlaceholderText(QApplication::translate("info", "\350\276\223\345\205\245\344\271\246\345\220\215\346\237\245\350\257\242", Q_NULLPTR));
        ISBN_text->setPlaceholderText(QApplication::translate("info", "\350\276\223\345\205\245\344\271\246\345\220\215\346\237\245\350\257\242", Q_NULLPTR));
        code_text->setPlaceholderText(QApplication::translate("info", "\350\276\223\345\205\245\350\257\273\350\200\205\350\257\201\344\273\266\345\217\267\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
