#include <SimulationMenu.h>
#include <WindowManager.h>
#include <qlayout.h>
#include <qpushbutton.h>

namespace UI
{
	SimulationMenu::SimulationMenu(QWidget* parent) :
		QWidget(parent)
	{
		WindowManager* cast = (WindowManager*)parent;
		if (cast)
			m_parent = cast;

		m_layout = new QVBoxLayout();
		m_mainMenuPushButton = new QPushButton("Main Menu");
		m_mainMenuPushButton->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
		m_layout->addWidget(m_mainMenuPushButton);
		this->setLayout(m_layout);
		Connect();
	}

	SimulationMenu::~SimulationMenu() {}

	void SimulationMenu::Connect()
	{
		if (m_parent)
		{
			connect(m_mainMenuPushButton, &QPushButton::clicked, m_parent, &WindowManager::ShowMainMenu);
		}
	}
}
