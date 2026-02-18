#include <iostream>

using namespace std;

int main(){

int año;

cout<<"Ingrese un año : "<<endl;
cin>> año;

if( (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)){
    cout<<"Año bisiesto"<<endl;
}else{
    cout<<"NO es bisiesto"<<endl;
}



return 0;
}
