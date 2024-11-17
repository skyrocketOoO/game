#include "utils/InputHandler.hpp"
#include <SDL2/SDL.h>  // SDL2 for input management

InputHandler::InputHandler()
    : moveUp(false), moveDown(false), moveLeft(false), moveRight(false) {}

InputHandler::~InputHandler() {}

void InputHandler::handleInput() {
    SDL_Event event;
    // Poll for events
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            // Handle window close event (game exit)
        }

        // Handle key press events
        if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    moveUp = true;
                    break;
                case SDLK_DOWN:
                    moveDown = true;
                    break;
                case SDLK_LEFT:
                    moveLeft = true;
                    break;
                case SDLK_RIGHT:
                    moveRight = true;
                    break;
            }
        }

        // Handle key release events
        if (event.type == SDL_KEYUP) {
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    moveUp = false;
                    break;
                case SDLK_DOWN:
                    moveDown = false;
                    break;
                case SDLK_LEFT:
                    moveLeft = false;
                    break;
                case SDLK_RIGHT:
                    moveRight = false;
                    break;
            }
        }
    }
}

// Direction checks
bool InputHandler::isMovingUp() const {
    return moveUp;
}

bool InputHandler::isMovingDown() const {
    return moveDown;
}

bool InputHandler::isMovingLeft() const {
    return moveLeft;
}

bool InputHandler::isMovingRight() const {
    return moveRight;
}

bool InputHandler::isAttacking() const {
    return attack;
}
