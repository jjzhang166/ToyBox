/********************************************************************************
** Form generated from reading UI file 'foodieEditer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODIEEDITER_H
#define UI_FOODIEEDITER_H

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

class Ui_FoodieEditer
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

    void setupUi(QMainWindow *FoodieEditer)
    {
        if (FoodieEditer->objectName().isEmpty())
            FoodieEditer->setObjectName(QStringLiteral("FoodieEditer"));
        FoodieEditer->resize(1013, 792);
        actionHelp = new QAction(FoodieEditer);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionVersion = new QAction(FoodieEditer);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        centralWidget = new QWidget(FoodieEditer);
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

        FoodieEditer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FoodieEditer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 23));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        FoodieEditer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FoodieEditer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FoodieEditer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FoodieEditer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FoodieEditer->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionVersion);
        menuAbout->addAction(actionHelp);

        retranslateUi(FoodieEditer);

        QMetaObject::connectSlotsByName(FoodieEditer);
    } // setupUi

    void retranslateUi(QMainWindow *FoodieEditer)
    {
        FoodieEditer->setWindowTitle(QApplication::translate("FoodieEditer", "FoodieUI", 0));
        actionHelp->setText(QApplication::translate("FoodieEditer", "Help", 0));
        actionVersion->setText(QApplication::translate("FoodieEditer", "Version", 0));
        menuAbout->setTitle(QApplication::translate("FoodieEditer", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class FoodieEditer: public Ui_FoodieEditer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODIEEDITER_H
