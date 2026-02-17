#include <iostream>

using namespace std;

int main()
{

    int n1,n2,n3,n4,n5, minimo, maximo;

    cout<<"Ingrese el primer numero : "<< endl;
    cin>> n1;

    maximo = n1;
    minimo = n1;

    cout<<"Ingrese el segundo numero : "<<endl;
    cin>> n2;

    if(n2 > maximo)
    {
        maximo = n2;
    }
    else if(n2 < minimo)
    {
        minimo = n2;
    }

    cout<<"Ingrese el tercer numero : "<<endl;
    cin>> n3;

    if(n3 > maximo)
    {
        maximo= n3;
    }
    else if(n3< minimo)
    {
        minimo = n3;
    }

    cout<<"Ingrese el cuarto numero : "<<endl;
    cin>> n4;

    if (n4 > maximo){
        maximo = n4;
    }else if(n4 < minimo){
        minimo = n4;
    }

    cout<<"Ingrese el quinto numero : "<<endl;
    cin>>n5;

    if(n5 > maximo){
        maximo = n5;
    }else if(n5 < minimo){
        minimo = n5;
    }

    cout<<"El numero mayor es : " << maximo << " y el minimo es : " << minimo << endl;

    return 0;
}
