#include <iostream>

using namespace std;

int main(){

int dn, mn, an, da, ma, aa, edad;

cout<<"Ingrese su fecha de nacimiento : "<<endl;
cin>> dn>> mn>> an;

cout<<"Ingrese la fecha actual : "<<endl;
cin>> da>>ma>>aa;

edad = aa - an;

if (ma < mn) {
    edad = edad - 1;
}
else if (ma == mn && da < dn) {
    edad = edad - 1;
}

cout<<"Su edad es de : "<< edad << "años " <<endl;





return 0;
}
