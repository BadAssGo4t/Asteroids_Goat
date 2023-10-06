#pragma once

#include <iostream>
#include "raylib.h"

#include "Main.h"
#include "Menu.h"
#include "Game.h"

#include "Button.h"

static Vector2 mousePoint;

struct   ScreenConfig
{
    float width;
    float height;
    const char* name;
};
static ScreenConfig currentScreenConfig;

namespace ScreenManager
{
	enum GameScreens
	{
		Menu = 0,
		Game,
		Instructions,
		Credits,
		End
	};
	extern GameScreens Screens;


    int ScreenManager();
	void SetMenuWindow(ScreenConfig currentScreenConfig);
}