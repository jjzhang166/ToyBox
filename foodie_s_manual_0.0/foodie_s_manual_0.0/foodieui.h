#ifndef FOODIEUI_H
#define FOODIEUI_H

#include <QtCore\Qqueue>
#include <QObject>

#include "UiMsgType.h"

class UiManager;

class FoodieUi : public QObject
{
	Q_OBJECT

public:
	FoodieUi(UiManager* um, QObject *parent = 0);
	~FoodieUi();
	
signals:
	void uiMsgSender(UiMsgType type);

private:
	QQueue<QMetaObject::Connection> m_cnQ;
	
};

#endif // FOODIEUI_H
