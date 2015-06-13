#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include "ui_foodieReader.h"

#include "foodieui.h"

#pragma pack(1)

struct StoredMsg
{
};

#pragma pack()


class FoodieReader : public QWidget, public FoodieUi
{
	Q_OBJECT

public:
	FoodieReader(UiManager* um, QWidget *parent = 0);
	~FoodieReader();

	bool store(void);
	bool restore(void);
	
private:
	void mousePressEvent(QMouseEvent *evn);
	void mouseMoveEvent(QMouseEvent *evn);
	void mouseReleaseEvent(QMouseEvent* evn);
	
private:
	Ui::FoodieReader ui;
	
	QCursor _cursor;
};

