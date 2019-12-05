#include <WindowManager.h>
#include <MainMenu.h>
#include <ArmoryMenu.h>
#include <SimulationMenu.h>
#include <ArtworkMenu.h>

namespace UI
{
	WindowManager::WindowManager(QWidget* parent) :
		QMainWindow(parent)
	{
		ShowMainMenu();
	}

	WindowManager::~WindowManager() {}

	void WindowManager::ShowMainMenu()
	{
		m_mainMenu = new MainMenu(this);
		SwapCentralWidget(m_mainMenu);
	}

	void WindowManager::ShowArmoryMenu()
	{
		m_armoryMenu = new ArmoryMenu(this);
		SwapCentralWidget(m_armoryMenu);
	}

	void WindowManager::ShowSimulationMenu()
	{
		m_simulationMenu = new SimulationMenu(this);
		SwapCentralWidget(m_simulationMenu);
	}

	void WindowManager::ShowArtworkMenu()
	{
		m_artworkMenu = new ArtworkMenu(this);
		SwapCentralWidget(m_artworkMenu);
	}

	void WindowManager::SwapCentralWidget(QWidget* widget)
	{
		QWidget* centralWidget = this->centralWidget();
		if (centralWidget)
			centralWidget->hide();
		this->setCentralWidget(widget);
		this->centralWidget()->show();
	}
}