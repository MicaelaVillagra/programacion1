#include <iostream>

using namespace std;

int main()
{

    int num1, num2,num3, mayor ;

    cout<<"Ingrese el primer numero : "<<endl;
    cin>> num1;

    cout<<" Ingrese el segundo numero :"<< endl;
    cin>> num2;

    cout<<"Ingrese el tercer numero : "<< endl;
    cin>>num3;

    if ( (num1 >= num2) && (num1 >= num3) )
    {
        mayor = num1;
    }
    else if (num2 >= num3)
    {
        mayor=num2;
    }
    else
    {
        mayor = num3;
    }
    cout<<"El numero mayor es el : " << mayor<<endl;

    return 0;
}
