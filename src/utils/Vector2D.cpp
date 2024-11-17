#include "utils/Vector2D.hpp"
#include <cmath>

float Vector2D::distanceTo(const Vector2D& other) const {
    return std::sqrt(std::pow(other.x - x, 2) + std::pow(other.y - y, 2));
}
