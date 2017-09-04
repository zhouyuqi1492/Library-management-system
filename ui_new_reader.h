/********************************************************************************
** Form generated from reading UI file 'new_reader.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_READER_H
#define UI_NEW_READER_H

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

class Ui_new_reader
{
public:
    QPushButton *pushButton;
    QLineEdit *status_text;
    QLineEdit *college_text;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name_text;
    QLineEdit *ID_text;

    void setupUi(QWidget *new_reader)
    {
        if (new_reader->objectName().isEmpty())
            new_reader->setObjectName(QStringLiteral("new_reader"));
        new_reader->resize(492, 501);
        new_reader->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/image/other.jpg)"));
        pushButton = new QPushButton(new_reader);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 420, 231, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(248, 248, 248);\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        status_text = new QLineEdit(new_reader);
        status_text->setObjectName(QStringLiteral("status_text"));
        status_text->setGeometry(QRect(240, 201, 241, 41));
        status_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        college_text = new QLineEdit(new_reader);
        college_text->setObjectName(QStringLiteral("college_text"));
        college_text->setGeometry(QRect(240, 270, 241, 41));
        college_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        label = new QLabel(new_reader);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 130, 101, 41));
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(new_reader);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 200, 101, 41));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(new_reader);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 270, 101, 41));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(new_reader);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 340, 101, 41));
        label_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        name_text = new QLineEdit(new_reader);
        name_text->setObjectName(QStringLiteral("name_text"));
        name_text->setGeometry(QRect(240, 131, 241, 41));
        name_text->setStyleSheet(QStringLiteral("background:rgb(255, 255, 255)"));
        ID_text = new QLineEdit(new_reader);
        ID_text->setObjectName(QStringLiteral("ID_text"));
        ID_text->setGeometry(QRect(240, 340, 241, 41));
        ID_text->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));

        retranslateUi(new_reader);

        QMetaObject::connectSlotsByName(new_reader);
    } // setupUi

    void retranslateUi(QWidget *new_reader)
    {
        new_reader->setWindowTitle(QApplication::translate("new_reader", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("new_reader", "\346\263\250\345\206\214", Q_NULLPTR));
        status_text->setPlaceholderText(QApplication::translate("new_reader", "\345\255\246\347\224\237\344\270\2720\346\225\231\345\270\210\344\270\2721", Q_NULLPTR));
        college_text->setPlaceholderText(QApplication::translate("new_reader", "\350\257\267\350\276\223\345\205\245college1 - college9", Q_NULLPTR));
        label->setText(QApplication::translate("new_reader", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("new_reader", "\350\272\253\344\273\275\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("new_reader", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("new_reader", "\350\257\201\344\273\266\345\217\267\357\274\232", Q_NULLPTR));
        name_text->setPlaceholderText(QApplication::translate("new_reader", "\350\276\223\345\205\245\350\257\273\350\200\205\345\247\223\345\220\215", Q_NULLPTR));
        ID_text->setPlaceholderText(QApplication::translate("new_reader", "\350\276\223\345\205\245ID\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class new_reader: public Ui_new_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_READER_H
