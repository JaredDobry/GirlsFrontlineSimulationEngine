#pragma once
#include <qmainwindow.h>
namespace UI
{
	class MainMenu;
	class ArmoryMenu;
	class SimulationMenu;
	class ArtworkMenu;

	class WindowManager : public QMainWindow
	{
		Q_OBJECT

	public:
		WindowManager(QWidget* parent = nullptr);
		~WindowManager();
	
	public slots:
		void ShowMainMenu();
		void ShowArmoryMenu();
		void ShowSimulationMenu();
		void ShowArtworkMenu();

	private:
		void SwapCentralWidget(QWidget* widget);

		MainMenu* m_mainMenu;
		ArmoryMenu* m_armoryMenu;
		SimulationMenu* m_simulationMenu;
		ArtworkMenu* m_artworkMenu;
	};
}


