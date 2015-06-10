#include "foodieEditer.h"

FoodieEditer::FoodieEditer(UiManager* um, QWidget *parent)
	: QMainWindow(parent), FoodieUi(um, parent)
{
	ui.setupUi(this);
}

FoodieEditer::~FoodieEditer()
{

}
