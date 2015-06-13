/********************************************************************************
** Form generated from reading UI file 'foodiecover.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODIECOVER_H
#define UI_FOODIECOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodieCover
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *FoodieCover)
    {
        if (FoodieCover->objectName().isEmpty())
            FoodieCover->setObjectName(QStringLiteral("FoodieCover"));
        FoodieCover->resize(540, 528);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FoodieCover->sizePolicy().hasHeightForWidth());
        FoodieCover->setSizePolicy(sizePolicy);
        FoodieCover->setMaximumSize(QSize(1938, 1218));
        FoodieCover->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FoodieUI/Resources/cake.png"), QSize(), QIcon::Normal, QIcon::Off);
        FoodieCover->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(FoodieCover);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        retranslateUi(FoodieCover);

        QMetaObject::connectSlotsByName(FoodieCover);
    } // setupUi

    void retranslateUi(QWidget *FoodieCover)
    {
        FoodieCover->setWindowTitle(QApplication::translate("FoodieCover", "FoodieCover", 0));
    } // retranslateUi

};

namespace Ui {
    class FoodieCover: public Ui_FoodieCover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODIECOVER_H
