#ifndef MATRIX3D_H
#define MATRIX3D_H

#include <string>
#include "Vector3D.h"

struct Matrix3D{
    private:
        float n[3][3];

    public: 

    Matrix3D(); 
    Matrix3D(float n00, float n01, float n02,
             float n10, float n11, float n12,
             float n20, float n21, float n22);

    Matrix3D(const Vector3D& a,const Vector3D& b, const Vector3D& c ); 

    std::string toString() const; 
    
};

#endif

