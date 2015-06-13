/********************************************************************************
** Form generated from reading UI file 'floatingpalettes.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOATINGPALETTES_H
#define UI_FLOATINGPALETTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FloatingPalettes
{
public:

    void setupUi(QWidget *FloatingPalettes)
    {
        if (FloatingPalettes->objectName().isEmpty())
            FloatingPalettes->setObjectName(QStringLiteral("FloatingPalettes"));
        FloatingPalettes->resize(400, 300);

        retranslateUi(FloatingPalettes);

        QMetaObject::connectSlotsByName(FloatingPalettes);
    } // setupUi

    void retranslateUi(QWidget *FloatingPalettes)
    {
        FloatingPalettes->setWindowTitle(QApplication::translate("FloatingPalettes", "FloatingPalettes", 0));
    } // retranslateUi

};

namespace Ui {
    class FloatingPalettes: public Ui_FloatingPalettes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOATINGPALETTES_H
