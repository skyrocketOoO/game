#include "entities/Player.hpp"
#include "graphics/Renderer.hpp" // Assume you have a Renderer class to handle rendering
#include <iostream>

Player::Player(float x, float y, int health, int damage)
    : Entity(x, y, health, damage, "Player") {}

void Player::update(float deltaTime) {
    // Handle input for movement and actions
    if (inputHandler.isMovingLeft()) {
        move(-1.0f * deltaTime, 0);
    }
    if (inputHandler.isMovingRight()) {
        move(1.0f * deltaTime, 0);
    }
    if (inputHandler.isMovingUp()) {
        move(0, -1.0f * deltaTime);
    }
    if (inputHandler.isMovingDown()) {
        move(0, 1.0f * deltaTime);
    }

    // Attack logic (expand as needed)
    if (inputHandler.isAttacking()) {
        attack();
    }
}

void Player::draw() const {
    Renderer renderer(800, 600, "My Game Title");
    renderer.drawSprite("playerSprite.png", position.x, position.y);
}

void Player::takeDamage(int amount) {
    health -= amount;
    if (health <= 0) {
        // Handle player death (e.g., restart the game, show game over screen)
        std::cout << "Player has died!" << std::endl;
    }
}

void Player::attack() {
    // Attack logic
    std::cout << "Player attacks!" << std::endl;
    // You can implement damage calculations and interactions with enemies
}

void Player::moveUp() {
    std::cout << "Player moveUp!" << std::endl;
}

void Player::moveDown() {
    std::cout << "Player moveDown!" << std::endl;
}

void Player::moveLeft() {
    std::cout << "Player moveLeft!" << std::endl;
}

void Player::moveRight() {
    std::cout << "Player moveRight!" << std::endl;
}