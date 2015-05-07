#ifndef FOODIEUI_H
#define FOODIEUI_H

#include <QtWidgets/QMainWindow>
#include "ui_foodieui.h"

class FoodieUI : public QMainWindow
{
	Q_OBJECT

public:
	FoodieUI(QWidget *parent = 0);
	~FoodieUI();

private:
	Ui::FoodieUIClass ui;
};

#endif // FOODIEUI_H
