#pragma once
#include <qwidget.h>
//Forward declarations
class QVBoxLayout;
class QPushButton;

namespace UI
{
	class WindowManager;
	class ArtworkMenu : public QWidget
	{
		Q_OBJECT

	public:
		ArtworkMenu(QWidget* parent = nullptr);
		~ArtworkMenu();

	private:
		void Connect();

		WindowManager* m_parent;
		QVBoxLayout* m_layout;
		QPushButton* m_mainMenuPushButton;
	};
}


