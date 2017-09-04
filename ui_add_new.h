/********************************************************************************
** Form generated from reading UI file 'add_new.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_NEW_H
#define UI_ADD_NEW_H

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

class Ui_add_new
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *book_name;
    QLineEdit *book_author;
    QLineEdit *book_num;
    QLineEdit *book_publish;
    QLineEdit *book_type;

    void setupUi(QWidget *add_new)
    {
        if (add_new->objectName().isEmpty())
            add_new->setObjectName(QStringLiteral("add_new"));
        add_new->resize(589, 600);
        add_new->setStyleSheet(QStringLiteral("#add_new{background-image: url(:/new/prefix1/image/other.jpg)}"));
        pushButton = new QPushButton(add_new);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 520, 261, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label = new QLabel(add_new);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 155, 81, 41));
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(add_new);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 220, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(add_new);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 280, 101, 41));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(add_new);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 340, 81, 41));
        label_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_5 = new QLabel(add_new);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 400, 101, 41));
        label_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        book_name = new QLineEdit(add_new);
        book_name->setObjectName(QStringLiteral("book_name"));
        book_name->setGeometry(QRect(260, 160, 201, 41));
        book_name->setStyleSheet(QLatin1String("background: rgb(255, 255, 255);\n"
""));
        book_author = new QLineEdit(add_new);
        book_author->setObjectName(QStringLiteral("book_author"));
        book_author->setGeometry(QRect(260, 220, 201, 41));
        book_author->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        book_num = new QLineEdit(add_new);
        book_num->setObjectName(QStringLiteral("book_num"));
        book_num->setGeometry(QRect(260, 280, 201, 41));
        book_num->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        book_publish = new QLineEdit(add_new);
        book_publish->setObjectName(QStringLiteral("book_publish"));
        book_publish->setGeometry(QRect(260, 340, 201, 41));
        book_publish->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        book_type = new QLineEdit(add_new);
        book_type->setObjectName(QStringLiteral("book_type"));
        book_type->setGeometry(QRect(260, 400, 201, 41));
        book_type->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));

        retranslateUi(add_new);

        QMetaObject::connectSlotsByName(add_new);
    } // setupUi

    void retranslateUi(QWidget *add_new)
    {
        add_new->setWindowTitle(QApplication::translate("add_new", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("add_new", "\346\267\273\345\212\240\345\233\276\344\271\246", Q_NULLPTR));
        label->setText(QApplication::translate("add_new", "\344\271\246\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_new", "\344\275\234\350\200\205:", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_new", "\350\264\255\345\205\245\346\225\260\351\207\217:", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_new", "\345\207\272\347\211\210\347\244\276:", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_new", "\345\233\276\344\271\246\347\261\273\345\236\213:", Q_NULLPTR));
        book_name->setPlaceholderText(QApplication::translate("add_new", "\350\257\267\350\276\223\345\205\245\345\233\276\344\271\246\345\220\215\347\247\260", Q_NULLPTR));
        book_author->setPlaceholderText(QApplication::translate("add_new", "\350\257\267\350\276\223\345\205\245\344\275\234\350\200\205\345\220\215\347\247\260", Q_NULLPTR));
        book_num->setPlaceholderText(QApplication::translate("add_new", "\350\257\267\350\276\223\345\205\245\350\264\255\345\205\245\345\233\276\344\271\246\346\225\260\351\207\217", Q_NULLPTR));
        book_publish->setPlaceholderText(QApplication::translate("add_new", "\350\257\267\350\276\223\345\205\245\350\257\245\345\233\276\344\271\246\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        book_type->setPlaceholderText(QApplication::translate("add_new", "\350\257\267\350\276\223\345\205\245\345\233\276\344\271\246\347\261\273\345\236\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_new: public Ui_add_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_NEW_H
