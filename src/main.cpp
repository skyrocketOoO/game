#include "utils/InputHandler.hpp"
#include "entities/Player.hpp"
#include "graphics/Renderer.hpp"
#include <iostream>

int main() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Initialize your window, renderer, etc. (if needed)
    Renderer renderer(800, 600, "Game Example");

    InputHandler inputHandler;
    Player player(100, 100, 100, 10);  // Initial player position

    bool running = true;
    while (running) {
        inputHandler.handleInput();

        // Move player based on input
        if (inputHandler.isMovingUp()) player.moveUp();
        if (inputHandler.isMovingDown()) player.moveDown();
        if (inputHandler.isMovingLeft()) player.moveLeft();
        if (inputHandler.isMovingRight()) player.moveRight();

        // Game rendering logic goes here

        // Refresh the screen and handle any other game logic
    }

    // Clean up and quit SDL
    SDL_Quit();
    return 0;
}
