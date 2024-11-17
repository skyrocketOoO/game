#ifndef PLAYER_H
#define PLAYER_H

#include "entities/Entity.hpp"
#include "utils/InputHandler.hpp" // Assume you have an InputHandler to handle player input

class Player : public Entity {
public:
    Player(float x, float y, int health, int damage);

    void update(float deltaTime) override;
    void draw() const override;

    void takeDamage(int amount);
    void attack();  // This can be expanded to attack logic
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

private:
    InputHandler inputHandler;  // Handle player input (e.g., keyboard)
};

#endif
