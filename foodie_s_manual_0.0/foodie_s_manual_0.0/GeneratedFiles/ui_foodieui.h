/********************************************************************************
** Form generated from reading UI file 'foodieui.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODIEUI_H
#define UI_FOODIEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodieUIClass
{
public:
    QAction *actionHelp;
    QAction *actionVersion;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FoodieUIClass)
    {
        if (FoodieUIClass->objectName().isEmpty())
            FoodieUIClass->setObjectName(QStringLiteral("FoodieUIClass"));
        FoodieUIClass->resize(1013, 792);
        actionHelp = new QAction(FoodieUIClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionVersion = new QAction(FoodieUIClass);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        centralWidget = new QWidget(FoodieUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        horizontalLayout->addWidget(treeView);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        FoodieUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FoodieUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 23));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        FoodieUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FoodieUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FoodieUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FoodieUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FoodieUIClass->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionVersion);
        menuAbout->addAction(actionHelp);

        retranslateUi(FoodieUIClass);

        QMetaObject::connectSlotsByName(FoodieUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *FoodieUIClass)
    {
        FoodieUIClass->setWindowTitle(QApplication::translate("FoodieUIClass", "FoodieUI", 0));
        actionHelp->setText(QApplication::translate("FoodieUIClass", "Help", 0));
        actionVersion->setText(QApplication::translate("FoodieUIClass", "Version", 0));
        menuAbout->setTitle(QApplication::translate("FoodieUIClass", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class FoodieUIClass: public Ui_FoodieUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODIEUI_H
