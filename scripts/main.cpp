#include <iostream>
#include "Vector3D.h"
#include "Matrix3D.h"


using namespace std; 



int main(){

    Vector3D a(1.0f, 2.0f, 3.0f); 
    Vector3D b(2.0f, 7.0f, -4.0f);
    Vector3D c(1.0f, 6.0f, -5.0f);

    a*2; 

    cout << a.toString() << endl;

    //const Matrix3D A(a,b,c); 

    //cout<< A.toString() << endl; 

    // Vector3D v(2.0f, 4.0f, 6.0f);

    // cout << v.toString() << endl; 

    // Vector3D Av = A*v; 

    // cout << Av.toString() << endl; 

    
    


    // Vector3D d(7.0f, 4.0f, 1.0f); 
    // Vector3D e(6.0f, 3.0f, 0.0f);
    // Vector3D f(5.0f, 2.0f, -1.0f);

    // const Matrix3D B(d,e,f); 

    // cout << A.toString() << endl; 

    // cout << B.toString() << endl; 

    // Matrix3D AB = (A*B);  

    // Matrix3D * ptr_mat; 

    // ptr_mat = &AB; 

    // cout << (ptr_mat)->toString() << endl; 

    // Vector3D b = a*0.1f; 

    // Vector3D c = a/5; 

    // Matrix3D m(a,b,c); 

    // m(1,2) = 4;

    // cout<<m(2,1)<<endl;
    
    // cout<<m[2].toString()<<endl;

    //increment(&a); 

    

    return 0;
}


