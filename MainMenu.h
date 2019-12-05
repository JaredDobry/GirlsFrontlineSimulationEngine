#pragma once
#include <qwidget.h>
#include <qpushbutton.h>
#include <qlayout.h>
namespace UI
{
	class WindowManager;

	class MainMenu : public QWidget
	{
		Q_OBJECT

	public:
		MainMenu(QWidget* parent = Q_NULLPTR);
		~MainMenu();

	private:
		void Connect();

		WindowManager* m_parent;
		QVBoxLayout* m_layout;
		QPushButton* m_artworkPushButton;
		QPushButton* m_armoryPushButton;
		QPushButton* m_simulationPushButton;
	};
}