#include "uimanager.h"

UiManager::UiManager(QObject *parent)
	: QObject(parent)
	, m_fc(NULL), m_fr(NULL), m_fe(NULL)
{
	m_fc = new FoodieCover(this);
}

UiManager::~UiManager()
{
	DEL(m_fc);
	DEL(m_fr);
	DEL(m_fe);
}


void UiManager::uiMsgProc(UiMsgType type)
{
	switch(type)
	{
	case COVER_CLICK:
		{
			delete m_fc;
			m_fc = NULL;

			m_fr = new FoodieReader(this);
			break;
		}

	default:
		{
			break;
		}
	}
}