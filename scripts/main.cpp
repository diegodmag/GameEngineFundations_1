#include <iostream>
//#include "Vector3D.h"
#include "Matrix3D.h"

using namespace std; 

int main(){

    // Vector3D v(1.0f, 2.0f, 3.0f); 

    // Vector3D v_2(4.0f, 2.0f, 8.0f); 
    
    // // v*=3; 

    // // v/=2; 

    // Vector3D v_n = Normalize(v); 

    // cout <<  Magnitude(v_n) << endl; 

    // cout << (v + v_2).toString() << endl; 

    Matrix3D m(1.0f, 2.0f, 3.0f,
            4.0f, 5.0f, 3.0f,
            7.0f, 8.0f, 9.0f); 

    cout << m.toString() << endl; 

/* code */
return 0;
}
