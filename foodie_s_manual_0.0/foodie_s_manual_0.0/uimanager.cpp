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
			DEL(m_fc);

			m_fr = new FoodieReader(this);
			break;
		}
	case READER_SWITCH_TO_EDITER:
		{
			m_fr->store();
			DEL(m_fr);

			m_fe = new FoodieEditer(this);
			break;
		}
	case EDITER_SWITCH_TO_READER:
		{
			DEL(m_fe);

			m_fr = new FoodieReader(this);
			m_fr->restore();
			break;
		}

	default:
		{
			break;
		}
	}
}