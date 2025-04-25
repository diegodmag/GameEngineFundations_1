#include <iostream>
#include "Vector3D.h"
#include "Matrix3D.h"

using namespace std; 

int main(){

    Vector3D a(1.0f, 2.0f, 3.0f); 

    Vector3D b = a*2; 

    Vector3D c = a*3; 

    Matrix3D m(a,b,c); 

    cout<<m.toString()<<endl; 

    /* code */
    return 0;
}
