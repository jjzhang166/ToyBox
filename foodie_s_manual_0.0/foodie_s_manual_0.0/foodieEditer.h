#ifndef FOODIEUI_H
#define FOODIEUI_H

#include <QtWidgets/QMainWindow>
#include "ui_foodieEditer.h"

class FoodieEditer : public QMainWindow
{
	Q_OBJECT

public:
	FoodieEditer(QWidget *parent = 0);
	~FoodieEditer();

private:
	Ui::FoodieEditer ui;
};

#endif // FOODIEUI_H
