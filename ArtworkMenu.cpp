#include <ArtworkMenu.h>
#include <WindowManager.h>
#include <qlayout.h>
#include <qpushbutton.h>

namespace UI
{
	ArtworkMenu::ArtworkMenu(QWidget* parent) :
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

	ArtworkMenu::~ArtworkMenu() {}

	void ArtworkMenu::Connect()
	{
		if (m_parent)
		{
			connect(m_mainMenuPushButton, &QPushButton::clicked, m_parent, &WindowManager::ShowMainMenu);
		}
	}
}
