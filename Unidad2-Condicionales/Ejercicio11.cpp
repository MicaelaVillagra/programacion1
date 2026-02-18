#include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3, n4, n5;
    int cero = 0;
    int neg= 0;
    int post = 0;


    cout<<"Ingrese el primer numero : " << endl;
    cin>> n1;

    if (n1 > 0)
    {
        post++;
    }
    else if (n1 < 0)
    {
        neg++;
    }
    else
    {
        cero++;
    }

    cout<<"Ingrese el segundo numero : "<< endl;
    cin>> n2;

    if(n2 > 0){
        post++;
    }else if (n2 < 0){
        neg++;
    }else{
        cero++;
    }

    cout<<"Ingrese el tercer numero : "<<endl;
    cin>> n3;

    if(n3 > 0 ){
        post++;
    }else if (n3 <0 ){
        neg++;
    }else {
        cero++;
    }

    cout<<"Ingrese el cuarto numero : "<<endl;
    cin>>n4 ;

    if (n4 > 0 ){
        post++;
    }else if( n4 < 0){
        neg++;
    }else{
        cero++;
    }

    cout<<"Ingrese el quinto numero : " <<endl;
    cin>>n5;

    if(n5 > 0 ){
        post++;
    }else if (n5 < 0 ){
        neg++;
    }else{
        cero++;
    }

    cout<<"La cantidad de numeros positivos es : " << post << endl;
    cout<<"La cantidad de numeros negativos es : " << neg << endl;
    cout<<"La cantidad de ceros es : " << cero << endl;





    return 0;

}
