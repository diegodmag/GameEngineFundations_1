#include "Vector3D.h"
#include <sstream>
#include <cmath>
#include <cassert>

// Constructor por defecto
Vector3D::Vector3D() = default;

// Constructor con parámetros
Vector3D::Vector3D(float a, float b, float c) : x(a), y(b), z(c) {}

// Acceso por índice (modificable)
float& Vector3D::operator[](int i) {
    assert(i >= 0 && i < 3 && "Invalid index for this vector");
    return *(&x + i);
}

// Acceso por índice (solo lectura)
const float& Vector3D::operator[](int i) const {
    assert(i >= 0 && i < 3 && "Invalid index for this vector");
    return *(&x + i);
}

// Escalado por multiplicación
Vector3D& Vector3D::operator*=(float s) {
    x *= s; y *= s; z *= s;
    return *this;
}

// Escalado por división
Vector3D& Vector3D::operator/=(float s) {
    x /= s; y /= s; z /= s;
    return *this;
}

// Conversión a string
std::string Vector3D::toString() const {
    std::ostringstream oss;
    oss << "(" << x << ", " << y << ", " << z << ")";
    return oss.str();
}

// Operadores globales
Vector3D operator*(const Vector3D& v, float s) {
    return Vector3D(v.x * s, v.y * s, v.z * s);
}

Vector3D operator/(const Vector3D& v, float s) {
    return Vector3D(v.x / s, v.y / s, v.z / s);
}

Vector3D operator-(const Vector3D& v, float s) {
    return Vector3D(v.x - s, v.y - s, v.z - s);
}

Vector3D operator+(const Vector3D& v, float s) {
    return Vector3D(v.x + s, v.y + s, v.z + s);
}

float Magnitude(const Vector3D& v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

Vector3D Normalize(const Vector3D& v) {
    return v / Magnitude(v);
}

Vector3D operator+(const Vector3D& a, const Vector3D& b) {
    return Vector3D(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector3D operator-(const Vector3D& a, const Vector3D& b) {
    return Vector3D(a.x - b.x, a.y - b.y, a.z - b.z);
}
