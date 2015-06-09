/********************************************************************************
** Form generated from reading UI file 'foodieReader.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODIEREADER_H
#define UI_FOODIEREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodieReader
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *FoodieReader)
    {
        if (FoodieReader->objectName().isEmpty())
            FoodieReader->setObjectName(QStringLiteral("FoodieReader"));
        FoodieReader->resize(1042, 786);
        FoodieReader->setCursor(QCursor(Qt::PointingHandCursor));
        FoodieReader->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(FoodieReader);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(FoodieReader);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/FoodieUI/Resouce/food2.jpg")));

        verticalLayout->addWidget(label);


        retranslateUi(FoodieReader);

        QMetaObject::connectSlotsByName(FoodieReader);
    } // setupUi

    void retranslateUi(QWidget *FoodieReader)
    {
        FoodieReader->setWindowTitle(QApplication::translate("FoodieReader", "FoodieCover", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FoodieReader: public Ui_FoodieReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODIEREADER_H
