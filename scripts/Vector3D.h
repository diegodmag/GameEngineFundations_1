#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <string>

struct Vector3D {
    float x, y, z;

    Vector3D();
    Vector3D(float a, float b, float c);

    float& operator[](int i);
    const float& operator[](int i) const;

    Vector3D& operator*=(float s);
    Vector3D& operator/=(float s);

    std::string toString() const;
};

// Operadores y funciones globales
Vector3D operator*(const Vector3D& v, float s);
Vector3D operator/(const Vector3D& v, float s);
Vector3D operator-(const Vector3D& v, float s);
Vector3D operator+(const Vector3D& v, float s);

float Magnitude(const Vector3D& v);
Vector3D Normalize(const Vector3D& v);

Vector3D operator+(const Vector3D& a, const Vector3D& b);
Vector3D operator-(const Vector3D& a, const Vector3D& b);

#endif
