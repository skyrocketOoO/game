#ifndef ENTITY_H
#define ENTITY_H

#include "utils/Vector2D.hpp" // Assume you have a 2D vector class
#include <string>

class Entity {
public:
    // Constructors
    Entity(float x, float y, int health, int damage, const std::string& name);

    // Virtual destructor for proper cleanup
    virtual ~Entity() {}

    // Getter and setter methods for position, health, and damage
    Vector2D getPosition() const;
    void setPosition(const Vector2D& position);

    int getHealth() const;
    void setHealth(int health);

    int getDamage() const;
    void setDamage(int damage);

    std::string getName() const;

    // Virtual functions to be overridden by player/monster
    virtual void update(float deltaTime) = 0;  // Update logic (movement, attack, etc.)
    virtual void draw() const = 0;             // Draw the entity

    // Common movement logic
    void move(float dx, float dy);

protected:
    Vector2D position;
    int health;
    int damage;
    std::string name;
};

#endif
