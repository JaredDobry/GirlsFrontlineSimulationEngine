#include <MainMenu.h>
#include <WindowManager.h>
namespace UI
{
	MainMenu::MainMenu(QWidget* parent) :
		QWidget(parent)
	{
		WindowManager* cast = (WindowManager*)parent;
		if (cast)
			m_parent = cast;

		m_layout = new QVBoxLayout();
		m_armoryPushButton = new QPushButton("Player Armory");
		m_armoryPushButton->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
		m_simulationPushButton = new QPushButton("Simulation Engine");
		m_simulationPushButton->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
		m_artworkPushButton = new QPushButton("Artwork Viewer");
		m_artworkPushButton->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
		m_layout->addWidget(m_armoryPushButton);
		m_layout->addWidget(m_simulationPushButton);
		m_layout->addWidget(m_artworkPushButton);
		this->setLayout(m_layout);
		Connect();
	}

	MainMenu::~MainMenu()
	{

	}

	void MainMenu::Connect()
	{
		if (m_parent)
		{
			connect(m_armoryPushButton, &QPushButton::clicked, m_parent, &WindowManager::ShowArmoryMenu);
			connect(m_simulationPushButton, &QPushButton::clicked, m_parent, &WindowManager::ShowSimulationMenu);
			connect(m_artworkPushButton, &QPushButton::clicked, m_parent, &WindowManager::ShowArtworkMenu);
		}
	}
}