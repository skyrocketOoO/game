#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <SDL2/SDL.h>  // Assuming you're using SDL2 for game input handling

class InputHandler {
public:
    InputHandler();  // Constructor
    ~InputHandler();  // Destructor

    // Function to handle events (key presses)
    void handleInput();

    // Get the movement direction of the player
    bool isMovingUp() const;
    bool isMovingDown() const;
    bool isMovingLeft() const;
    bool isMovingRight() const;
    bool isAttacking() const;

private:
    bool moveUp, moveDown, moveLeft, moveRight, attack;  // Direction flags
};

#endif // INPUT_HANDLER_H
