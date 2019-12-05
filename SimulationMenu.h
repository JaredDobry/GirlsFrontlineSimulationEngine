#pragma once
#include <qwidget.h>
//Forward declarations
class QVBoxLayout;
class QPushButton;

namespace UI
{
	class WindowManager;
	class SimulationMenu : public QWidget
	{
		Q_OBJECT

	public:
		SimulationMenu(QWidget* parent = nullptr);
		~SimulationMenu();

	private:
		void Connect();

		WindowManager* m_parent;
		QVBoxLayout* m_layout;
		QPushButton* m_mainMenuPushButton;
	};
}