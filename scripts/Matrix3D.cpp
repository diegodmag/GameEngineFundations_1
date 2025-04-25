#include "Matrix3D.h"
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

Matrix3D::Matrix3D() = default;

Matrix3D::Matrix3D(float n00, float n01, float n02,
         float n10, float n11, float n12,
         float n20, float n21, float n22){

         n[0][0] = n00; n[0][1] = n01; n[0][2]=n02;
         n[1][0] = n10; n[1][1] = n11; n[1][2]=n12;
         n[2][0] = n20; n[2][1] = n21; n[2][2]=n22;  
}

Matrix3D::Matrix3D(const Vector3D& a,const Vector3D& b, const Vector3D& c){
        
}

std::string Matrix3D::toString() const{
    std::ostringstream oss;
    oss << "[" << n[0][0] << ", " << n[0][1] << ", " << n[0][2] << "]"<<endl;
    oss << "[" << n[1][0] << ", " << n[1][1] << ", " << n[1][2] << "]"<<endl;
    oss << "[" << n[2][0] << ", " << n[2][1] << ", " << n[2][2] << "]"<<endl;
    return oss.str();
}

