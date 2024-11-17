#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
public:
    float x, y;

    Vector2D(float x = 0, float y = 0) : x(x), y(y) {}

    // Add other utility functions as needed (e.g., normalize, distance, etc.)
    float distanceTo(const Vector2D& other) const;
};

#endif
