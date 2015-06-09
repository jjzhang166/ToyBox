#include "foodieEditer.h"
#include "foodieReader.h"
#include "foodiecover.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FoodieCover fc;
	FoodieReader fr;
	FoodieEditer fe;

	QObject::connect(&fc, &FoodieCover::coverClick, &fr, &FoodieReader::readerShow);

	fc.show();
	return a.exec();
}
