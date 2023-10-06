#include "Game.h"

namespace Game
{

    void InitGame() // Init
    {
        currentScreenConfig.name = "Asteroids - Game";
        SetWindowTitle(currentScreenConfig.name);
    }

    void UpdateGame()
    {
        DrawGame();

    }

    void DrawGame() {

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    void UnloadGame()
    {
        std::cout << "Game Unloaded." << '\n';
    }
}
