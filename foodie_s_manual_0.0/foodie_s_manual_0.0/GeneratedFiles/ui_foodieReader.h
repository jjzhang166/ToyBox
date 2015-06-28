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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodieReader
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
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
        FoodieReader->resize(526, 549);
        FoodieReader->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FoodieUI/Resources/foodie.png"), QSize(), QIcon::Normal, QIcon::Off);
        FoodieReader->setWindowIcon(icon);
        FoodieReader->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(FoodieReader);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(FoodieReader);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(false);

        verticalLayout->addWidget(textEdit);

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
        textEdit->setHtml(QApplication::translate("FoodieReader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/FoodieUI/Resources/collection.gif\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; color:#ff0000;\">haha</span><span style=\" font-size:10pt; font-weight:600; color:#000000;\">hagaha</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
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
