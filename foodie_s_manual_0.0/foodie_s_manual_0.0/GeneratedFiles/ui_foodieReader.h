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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodieReader
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QFrame *line;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QFrame *line_2;
    QLabel *label_3;

    void setupUi(QWidget *FoodieReader)
    {
        if (FoodieReader->objectName().isEmpty())
            FoodieReader->setObjectName(QStringLiteral("FoodieReader"));
        FoodieReader->resize(1938, 1249);
        FoodieReader->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FoodieUI/Resources/cake.png"), QSize(), QIcon::Normal, QIcon::Off);
        FoodieReader->setWindowIcon(icon);
        FoodieReader->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(FoodieReader);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(FoodieReader);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/FoodieUI/Resources/food1.jpg")));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(FoodieReader);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        line = new QFrame(FoodieReader);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        progressBar = new QProgressBar(FoodieReader);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(FoodieReader);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        line_2 = new QFrame(FoodieReader);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        label_3 = new QLabel(FoodieReader);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FoodieReader);

        QMetaObject::connectSlotsByName(FoodieReader);
    } // setupUi

    void retranslateUi(QWidget *FoodieReader)
    {
        FoodieReader->setWindowTitle(QApplication::translate("FoodieReader", "FoodieCover", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("FoodieReader", "TextLabel", 0));
        pushButton->setText(QApplication::translate("FoodieReader", "Edit Mode", 0));
        label_3->setText(QApplication::translate("FoodieReader", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class FoodieReader: public Ui_FoodieReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODIEREADER_H
