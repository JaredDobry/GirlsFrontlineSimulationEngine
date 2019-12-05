#pragma once
#include <qwidget.h>
//Forward declarations
class QHBoxLayout;
class QPushButton;

namespace UI
{
	class WindowManager;
	class ArmoryMenu : public QWidget
	{
		Q_OBJECT

	public:
		ArmoryMenu(QWidget* parent = nullptr);
		~ArmoryMenu();

	private:
		void Connect();

		WindowManager* m_parent;
		QHBoxLayout* m_layout;
		QPushButton* m_mainMenuPushButton;
	};
}