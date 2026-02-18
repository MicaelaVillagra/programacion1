#include <iostream>

using namespace std;

int main(){

int num1, num2, num3, minimo, medio, maximo;

cout<<"Ingrese el primer numero : "<< endl;
cin>>num1;

minimo = num1;
medio = num1;
maximo = num1;

cout<<"Ingrese el segundo numero :"<<endl;
cin>>num2;

if(num2 > maximo){
    medio= maximo;
    maximo = num2;
}else if (num2 <minimo){
    medio = minimo;
    minimo = num2;
}else{
    medio = num2;
}

cout<<"Ingrese el ultimo numero : "<<endl;
cin>>num3;

if(num3 > maximo){
    medio= maximo;
    maximo= num3;
}else if(num3 < minimo){
    medio = minimo;
    minimo = num3;
}else{
    medio = num3;
}

cout<<"Los numeros ordenados son : " << minimo << " - " << medio << " - " <<  maximo << endl;



return 0;
}
