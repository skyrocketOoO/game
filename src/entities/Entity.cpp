#include "entities/Entity.hpp"
#include <iostream>

Entity::Entity(float x, float y, int health, int damage, const std::string& name)
    : position(x, y), health(health), damage(damage), name(name) {}

Vector2D Entity::getPosition() const {
    return position;
}

void Entity::setPosition(const Vector2D& newPos) {
    position = newPos;
}

int Entity::getHealth() const {
    return health;
}

void Entity::setHealth(int newHealth) {
    health = newHealth;
}

int Entity::getDamage() const {
    return damage;
}

void Entity::setDamage(int newDamage) {
    damage = newDamage;
}

std::string Entity::getName() const {
    return name;
}

void Entity::move(float dx, float dy) {
    position.x += dx;
    position.y += dy;
}
