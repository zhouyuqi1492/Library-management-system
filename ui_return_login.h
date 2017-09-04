/********************************************************************************
** Form generated from reading UI file 'return_login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURN_LOGIN_H
#define UI_RETURN_LOGIN_H

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

class Ui_return_login
{
public:
    QLabel *label;
    QLineEdit *licenseid_text;
    QPushButton *return_btn;
    QLabel *label_2;
    QLineEdit *ISBN_text;

    void setupUi(QWidget *return_login)
    {
        if (return_login->objectName().isEmpty())
            return_login->setObjectName(QStringLiteral("return_login"));
        return_login->resize(585, 567);
        return_login->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/image/other.jpg);"));
        label = new QLabel(return_login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 190, 121, 51));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"background: transparent;"));
        licenseid_text = new QLineEdit(return_login);
        licenseid_text->setObjectName(QStringLiteral("licenseid_text"));
        licenseid_text->setGeometry(QRect(260, 190, 221, 51));
        licenseid_text->setStyleSheet(QStringLiteral("background:rgb(255, 255, 255)"));
        return_btn = new QPushButton(return_login);
        return_btn->setObjectName(QStringLiteral("return_btn"));
        return_btn->setGeometry(QRect(210, 520, 191, 41));
        return_btn->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(return_login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 360, 111, 51));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"background: transparent;"));
        ISBN_text = new QLineEdit(return_login);
        ISBN_text->setObjectName(QStringLiteral("ISBN_text"));
        ISBN_text->setGeometry(QRect(260, 360, 221, 51));
        ISBN_text->setStyleSheet(QStringLiteral("background:rgb(255, 255, 255)"));

        retranslateUi(return_login);

        QMetaObject::connectSlotsByName(return_login);
    } // setupUi

    void retranslateUi(QWidget *return_login)
    {
        return_login->setWindowTitle(QApplication::translate("return_login", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("return_login", "\350\257\273\350\200\205\350\257\201\344\273\266\345\217\267\357\274\232", Q_NULLPTR));
        licenseid_text->setPlaceholderText(QApplication::translate("return_login", "\350\276\223\345\205\245licenseid", Q_NULLPTR));
        return_btn->setText(QApplication::translate("return_login", "\350\277\230\344\271\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("return_login", "ISBN:", Q_NULLPTR));
        ISBN_text->setPlaceholderText(QApplication::translate("return_login", "\350\276\223\345\205\245\345\233\276\344\271\246\347\232\204ISBN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class return_login: public Ui_return_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURN_LOGIN_H
