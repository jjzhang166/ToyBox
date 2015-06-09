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

class Ui_FoodieUI
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

    void setupUi(QMainWindow *FoodieUI)
    {
        if (FoodieUI->objectName().isEmpty())
            FoodieUI->setObjectName(QStringLiteral("FoodieUI"));
        FoodieUI->resize(1013, 792);
        actionHelp = new QAction(FoodieUI);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionVersion = new QAction(FoodieUI);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        centralWidget = new QWidget(FoodieUI);
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

        FoodieUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FoodieUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 23));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        FoodieUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FoodieUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FoodieUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FoodieUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FoodieUI->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionVersion);
        menuAbout->addAction(actionHelp);

        retranslateUi(FoodieUI);

        QMetaObject::connectSlotsByName(FoodieUI);
    } // setupUi

    void retranslateUi(QMainWindow *FoodieUI)
    {
        FoodieUI->setWindowTitle(QApplication::translate("FoodieUI", "FoodieUI", 0));
        actionHelp->setText(QApplication::translate("FoodieUI", "Help", 0));
        actionVersion->setText(QApplication::translate("FoodieUI", "Version", 0));
        menuAbout->setTitle(QApplication::translate("FoodieUI", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class FoodieUI: public Ui_FoodieUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODIEUI_H
