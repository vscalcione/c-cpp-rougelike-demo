#include "raylib-cpp.hpp"

#include "constants.h"
#include "game.hpp"

int main()
{
    raylib::Color textColor = LIGHTGRAY;
    raylib::Window window(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib [core] example - basic window");

    Game game {};
    game.setup();

    SetTargetFPS(60);

    while(!window.ShouldClose())
    {
        game.update();
        BeginDrawing();
        window.ClearBackground(RAYWHITE);
        game.draw();
        EndDrawing();
    }
    return 0;
}
