#include "Matrix3D.h"
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

Matrix3D::Matrix3D() = default;

Matrix3D::Matrix3D(float n00, float n01, float n02,
         float n10, float n11, float n12,
         float n20, float n21, float n22){

         n[0][0] = n00; n[0][1] = n10; n[0][2]=n20;
         n[1][0] = n01; n[1][1] = n11; n[1][2]=n21;
         n[2][0] = n02; n[2][1] = n12; n[2][2]=n22;  
}

Matrix3D::Matrix3D(const Vector3D& a,const Vector3D& b, const Vector3D& c){
    n[0][0] = a.x; n[0][1] = a.y; n[0][2]=a.z;
    n[1][0] = b.x; n[1][1] = b.y; n[1][2]=b.z;
    n[2][0] = c.x; n[2][1] = c.y; n[2][2]=c.z;
}


float& Matrix3D::operator() (int i, int j){
    return(n[j][i]);
}

const float& Matrix3D::operator() (int i, int j) const{
    return(n[j][i]);
}

//Esto es del libro 
Vector3D& Matrix3D::operator [] (int j){
    return (*reinterpret_cast<Vector3D*>(n[j]));
}

const Vector3D& Matrix3D::operator [] (int j) const{
    return (*reinterpret_cast<const Vector3D*>(n[j]));
}

//Esto seria lo seguro 
// Vector3D Matrix3D::operator [] (int j){
//     return Vector3D(n[j][0], n[j][1], n[j][2]); 
// }

std::string Matrix3D::toString() const{
    std::ostringstream oss;
    oss << "[" << n[0][0] << ", " << n[1][0] << ", " << n[2][0] << "]"<<endl;
    oss << "[" << n[0][1] << ", " << n[1][1] << ", " << n[2][1] << "]"<<endl;
    oss << "[" << n[0][2] << ", " << n[1][2] << ", " << n[2][2] << "]"<<endl;
    return oss.str();
}

Matrix3D operator *(const Matrix3D& A, const Matrix3D& B){
    Matrix3D result;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result(i, j) = A(i, 0) * B(0, j)
                         + A(i, 1) * B(1, j)
                         + A(i, 2) * B(2, j);
        }
    }

    return result;
}

Vector3D operator *(const Matrix3D& M, const Vector3D& v){
    Vector3D result;

    for(int i=0; i< 3; i++){
        result[i] = M(i,0)*v.x + M(i,1)*v.y + M(i,2)*v.z;  
    }
    return result;
}


