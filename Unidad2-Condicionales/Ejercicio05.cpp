#include <iostream>

using namespace std;

int main()
{

    double importe, tp;

    cout<<" Ingrese el importe sin descuento : "<<endl;
    cin>> importe;

    if(importe >500)
    {
        tp= importe * 0.85;
    }
    else if(importe >= 100)
    {
        tp= importe * 0.90;
    }
    else
    {
        tp = importe * 0.95;
    }
    cout<<"El total a pagar es de : " << tp << endl;




    return 0;
}
