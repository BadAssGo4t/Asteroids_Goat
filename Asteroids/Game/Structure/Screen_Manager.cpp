#include "Screen_Manager.h"

namespace ScreenManager
{

	static void Change();

	GameScreens Screens;

    int ScreenManager()
	{
		SetTargetFPS(60);

		Menu::InitMenu();

		while (!WindowShouldClose())
		{
			Change();
		}

		CloseWindow();
		Menu::UnloadMenu();
     	//Unloader::UnloadAll();
		return 0;
	}


	static void Change()
	{

		switch (Screens)
		{

		case Menu: {
			Menu::UpdateMenu();
		} break;

		}

	}

	void SetMenuWindow(ScreenConfig currentScreenConfig)
	{
		SetWindowSize(static_cast<int>(currentScreenConfig.width), static_cast<int>(currentScreenConfig.height));
		SetWindowTitle(currentScreenConfig.name);
	}
}