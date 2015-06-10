#ifndef FOODIEEDITER_H
#define FOODIEEDITER_H

#include <QtWidgets/QMainWindow>
#include "ui_foodieEditer.h"

#include "foodieui.h"

class FoodieEditer : public QMainWindow, public FoodieUi
{
	Q_OBJECT

public:
	FoodieEditer(UiManager* um, QWidget *parent = 0);
	~FoodieEditer();

private:
	Ui::FoodieEditer ui;
};

#endif //FOODIEEDITER_H
