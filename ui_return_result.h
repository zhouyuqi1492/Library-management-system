/********************************************************************************
** Form generated from reading UI file 'return_result.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURN_RESULT_H
#define UI_RETURN_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_return_result
{
public:
    QLabel *label;
    QLabel *fine;
    QListWidget *book_list;
    QPushButton *return_button;
    QLineEdit *isbn_text;

    void setupUi(QWidget *return_result)
    {
        if (return_result->objectName().isEmpty())
            return_result->setObjectName(QStringLiteral("return_result"));
        return_result->resize(400, 300);
        label = new QLabel(return_result);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 81, 21));
        fine = new QLabel(return_result);
        fine->setObjectName(QStringLiteral("fine"));
        fine->setGeometry(QRect(160, 40, 161, 21));
        book_list = new QListWidget(return_result);
        book_list->setObjectName(QStringLiteral("book_list"));
        book_list->setGeometry(QRect(50, 70, 291, 121));
        return_button = new QPushButton(return_result);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setGeometry(QRect(230, 220, 101, 31));
        isbn_text = new QLineEdit(return_result);
        isbn_text->setObjectName(QStringLiteral("isbn_text"));
        isbn_text->setGeometry(QRect(60, 220, 141, 31));

        retranslateUi(return_result);

        QMetaObject::connectSlotsByName(return_result);
    } // setupUi

    void retranslateUi(QWidget *return_result)
    {
        return_result->setWindowTitle(QApplication::translate("return_result", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("return_result", "\346\254\240\346\254\276\357\274\232", Q_NULLPTR));
        fine->setText(QString());
        return_button->setText(QApplication::translate("return_result", "\345\275\222\350\277\230\344\271\246\347\261\215", Q_NULLPTR));
        isbn_text->setText(QString());
        isbn_text->setPlaceholderText(QApplication::translate("return_result", "\350\276\223\345\205\245\350\246\201\345\275\222\350\277\230\345\233\276\344\271\246\347\232\204ISBN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class return_result: public Ui_return_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURN_RESULT_H
