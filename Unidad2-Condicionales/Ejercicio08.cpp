#include <iostream>

using namespace std;

int main()
{

    int lado1,lado2,lado3;

    cout<<"Ingrese el primero lado del triangulo : "<<endl;
    cin>> lado1;

    cout<<"Ingrese el segundo lado del triangulo : "<< endl;
    cin>> lado2;

    cout<<"Ingrese el ultimo lado del triangulo : "<< endl;
    cin>> lado3;

    if((lado1 == lado2) && (lado2 == lado3))
    {
        cout<<"El triangulo es equilatero"<< endl;
    }
    else if((lado1 != lado2) && (lado2 != lado3) && ( lado3 != lado1))
    {
        cout<<"El triandulo es Escaleno. "<< endl;
    }
    else
    {
        cout<<"El triangulo es Isoceles. " <<endl;
    }




    return 0;
}
