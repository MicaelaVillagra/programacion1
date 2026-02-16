#include <iostream>

using namespace std;

int main(){

int num1, num2, dif;

cout<<"Ingrese el primer numero :"<< endl;
cin>> num1;

cout<<"Ingrese el segundo numero : "<< endl;
cin>> num2;

if (num1 > num2){
    dif = num1 - num2;
    cout<< "La diferencia es de : " << dif << endl;
}else{
    dif= num2 - num1;
    cout<<"La diferencia es de : " << dif << endl;
}





return 0;
}
