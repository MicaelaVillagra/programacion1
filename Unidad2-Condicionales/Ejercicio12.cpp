#include <iostream>

using namespace std;

int main(){

     int n1, n2, n3, medio;

     cout<<"Ingrese los tres numeros : "<< endl;
     cin>>n1>>n2>>n3;

    if ((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2)) {
        medio = n1;
    }
    else if ((n2 > n1 && n2 < n3) || (n2 > n3 && n2 < n1)) {
        medio = n2;
    }
    else {
        medio = n3;
    }

    cout << "El numero del medio es: " << medio << endl;



 return 0;

 }





