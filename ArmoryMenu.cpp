#include <ArmoryMenu.h>
#include <WindowManager.h>
#include <qlayout.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qscrollarea.h>
#include <qtextedit.h>
#include <qlabel.h>
#include <qspinbox.h>

namespace UI
{
	ArmoryMenu::ArmoryMenu(QWidget* parent) :
		QWidget(parent)
	{
		WindowManager* cast = (WindowManager*)parent;
		if (cast)
			m_parent = cast;

		//Main layout that holds the menu on the left and the scroll area on the right
		m_layout = new QHBoxLayout();

		//Layout that holds the menu buttons on the left
		QVBoxLayout* leftFrame = new QVBoxLayout();
		m_mainMenuPushButton = new QPushButton("Main Menu");
		//Add widgets to left frame
		leftFrame->addWidget(m_mainMenuPushButton);
		//Add left frame to main layout
		m_layout->addItem(leftFrame);
		
		//Layout that holds the scroll area and selection specific menu buttons
		QVBoxLayout* rightFrame = new QVBoxLayout();
		//Label for what mode we are in
		QLabel* armoryModeLabel = new QLabel("T-Doll Armory");
		rightFrame->addWidget(armoryModeLabel);
		rightFrame->setAlignment(armoryModeLabel, Qt::AlignHCenter);
		//Layout that holds the menu buttons
		QHBoxLayout* menuButtonFrame = new QHBoxLayout();
		//Populate menu buttons
		QPushButton* addDollPushButton = new QPushButton("Add T-Doll");
		menuButtonFrame->addWidget(addDollPushButton);
		//Add menu button layout to the frame
		rightFrame->addItem(menuButtonFrame);

		////Frame that holds the entry list
		//QFrame* entryListFrame = new QFrame();
		//Layout that holds the entires
		QVBoxLayout* entryListLayout = new QVBoxLayout();
		//entryListFrame->setLayout(entryListLayout);

		//Create an entry
		QHBoxLayout* entryLayout = new QHBoxLayout();
		QLabel* nameLabel = new QLabel("T-Doll:");
		QLabel* entryLabel = new QLabel("H&K G11");
		QLabel* levelLabel = new QLabel("Level");
		QSpinBox* levelSpinBox = new QSpinBox();
		levelSpinBox->setMaximum(100);
		levelSpinBox->setMinimum(0);
		QPushButton* removePushButton = new QPushButton("Delete");
		
		//Add elements to this entry
		entryLayout->addWidget(nameLabel);
		entryLayout->addWidget(entryLabel);
		entryLayout->addWidget(levelLabel);
		entryLayout->addWidget(levelSpinBox);
		entryLayout->addWidget(removePushButton);

		//Add entry to layout
		entryListLayout->addItem(entryLayout);

		//ScrollArea that holds the entry list
		QScrollArea* scrollArea = new QScrollArea();
		scrollArea->setLayout(entryListLayout);

		//Add the scroll area to the main right frame
		rightFrame->addWidget(scrollArea);

		//Add right frame to main layout
		m_layout->addItem(rightFrame);
		this->setLayout(m_layout);
		Connect();
	}

	ArmoryMenu::~ArmoryMenu() {}

	void ArmoryMenu::Connect()
	{
		if (m_parent)
		{
			connect(m_mainMenuPushButton, &QPushButton::clicked, m_parent, &WindowManager::ShowMainMenu);
		}
	}
}
