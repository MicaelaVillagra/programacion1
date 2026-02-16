#include <iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout<<"Ingrese el primero numero : " << endl;
    cin >> num1;

    cout<< "Ingrese el segundo numero : " << endl;
    cin>> num2;

    if ((num1 % num2) == 0)
    {
        cout<<"El primer numero es multiplo del segundo" << endl;
    }
    else
    {
        cout<<"El primer numero NO es multiplo del segundo" << endl;
    }




    return 0;
}
