#include <iostream>

using namespace std;

int main()
{
    /*
      int horas;
      double valorHora, sueldo;

      cout <<" Ingrese la cantidad de horas trabajadas: " ;
      cin>> horas;

      cout << " Ingrese el valor por hora : ";
      cin>> valorHora;

      sueldo = horas * valorHora;

      cout <<" El sueldo correcpondiente es : " << sueldo << endl;

      */
    /*
        // ejercicio 2

        int a , b , aux;

        cout << "Ingrese un numero :" ;
        cin >> a ;

        cout << "Ingrese otro numero : " ;
        cin >> b;

        aux = a ;

        a = b ;

        b = aux;

        cout << "Los numeros son : " << a << " y " << b << endl;

    */
    /*
        //ejercicio 3


        int venta , premio;
        double sueldo;

        cout << " Ingrese la cantidad de autos vendidos : ";
        cin >> venta;


        premio = venta * 700 ;

        sueldo = 5000 + premio ;

        cout << " Su sueldo total es de : " << sueldo << endl;

    */
    /*
        // Ejercicio 4

        int totalAsientos, ocupado , desocupado ;
        double porcentajeOcupado , porcentajeDesocupado;
        cout << "Ingrese la cantidad de asientos totales del avion :" ;
        cin >> totalAsientos;

        cout <<" Ingrese la cantidad de asientos ocupados : ";
        cin>> ocupado;

        porcentajeOcupado = (ocupado * 100)/ totalAsientos;
        desocupado= totalAsientos - ocupado;
        porcentajeDesocupado = ( desocupado * 100) / totalAsientos;

        cout << "El porcentaje de asientos desocupados es : "
        << porcentajeDesocupado
        << "% y la cantidad de asientos ocupados es : "
        << porcentajeOcupado << "%" << endl;

    */
    /*
    //Ejercicio 5

    //declaracion de variables:
    int a, b, c;
    double total, pa, pb, pc;

    //Entrada de datos:

    cout << "Ingrese la cantidad de alfajores A vendidos : " << endl;
    cin>> a;

    cout << "Ingrese la cantidad de alfajores B vendidos : " << endl;
    cin>> b;

    cout<< "Ingrese la cantidad de alfajores C vendidos : " << endl;
    cin>> c;

    //Procesamiento

    total = a + b + c;

    pa = (a*100)/ total;

    pb = (b*100) / total;

    pc = (c*100) / total;

    //Salida de datos:

    cout <<"El porcentaje de ventas es para el Alfajor A : " << pa << " % "<< endl;
    cout <<"El porcentaje de ventas es para el Alfajor B : " << pb << " % "<< endl;
    cout <<"El porcentaje de ventas es para el Alfajor C : " << pc << " % "<< endl;
    */

    //EJERCICIO 6

    /*
        //DECLARO VARIABLES

        double recaudacion1 , recaudacion2, recaudacion3, recaudacion4 ;
        double promSemana, porc1, porc2, porc3, porc4, total;

        //ENTRADA DE DATOS:

        cout<< " Ingrese el importe de la semana 1 : " << endl;
        cin >> recaudacion1;

        cout<< "Ingrese el importe de la semana 2 : " << endl;
        cin>> recaudacion2;

        cout<< "Ingrese el importe de la semana 3 : " << endl;
        cin>> recaudacion3;

        cout<< "Ingrese el importe de la semana 4 : " << endl;
        cin>> recaudacion4;

        //PROCESAMIENTO:

        total = recaudacion1 + recaudacion2 + recaudacion3 + recaudacion4;

        promSemana = total / 4;

        porc1 = (recaudacion1 * 100.0) / total;
        porc2 = (recaudacion2 * 100.0) / total;
        porc3 = (recaudacion3 * 100.0) / total;
        porc4 = (recaudacion4 * 100.0) / total;

        //SALIDA DE DATOS:

        cout<< "La recaudacion promedio es : " << promSemana << endl;
        cout<< "El porcentaje de recaudacion de la semana 1 es : " << porc1 << " % " <<endl;
        cout<< "El porcentaje de recaudacion de la semana 2 es : " << porc2 << " % " <<endl;
        cout<< "El porcentaje de recaudacion de la semana 3 es : " << porc3 << " % " <<endl;
        cout<< "El porcentaje de recaudacion de la semana 4 es : " << porc4 << " % " <<endl;

    */
    /*
    //EJERCICIO 7

    //DECLARO VARIABLES

    double importe , pdescuento, importeApagar, descuentoA ;

    //ENTRADA DE DATOS

    cout<< " Ingrese el importe de venta : " << endl;
    cin >> importe;

    cout<< "Ingrese el porcentaje de descuesto aplicada a la misma : " << endl;
    cin>> pdescuento;

    //PROCESAMIENTO

    descuentoA = (importe * pdescuento)/100 ;
    importeApagar = importe - descuentoA ;

    //SALIDA DE DATOS

    cout<< "El importe a pagar es de : $" << importeApagar << endl;

    */
    /*

    //EJERCICIO 8

    //DECLARO VARIABLES

    double venta, vdescuento, descuento, porcentaje;

    //ENTRADA DE DATOS

    cout<< "Ingrese el importe de venta sin descuento : " << endl;
    cin >> venta;

    cout<< "Ingrese el importe de venta con el descuento incluido : " <<endl;
    cin>> vdescuento;

    //PROCESAMIENTO

    descuento = venta - vdescuento;
    porcentaje = (descuento / venta) * 100;

    //SALIDA DE DATOS

    cout<< "El porcentaje de descuento aplicado es : "<< porcentaje << " % " << endl;

    */
    /*
    //EJERCICIO 9

    //DECLARO VARIABLES

    int minu, hora, minutos;

    //INGRESO DE DATOS

    cout<< "Ingrese la cantidad de minutos : "<< endl;
    cin>> minu;

    //PROCESAMIENTO
    minutos = minu %60;
    hora = (minu - minutos) /60;

    //SALIDA DE DATOS

    cout<< "El valor ingresado equivale a : " << hora << " horas y " << minutos << " minutos " << endl;

    */

    /*

    //EJERCICIO 10

    //DECLARO VARIABLES
    int horas, dias, h ;

    //INGRESO DE DATOS

    cout<< "Ingrese la cantidad de horas : " << endl;
    cin>> h;

    //PRPCESAMIENTO

    horas = h % 24;
    dias = (h -horas) / 24;

    //SALIDA DE DATOS

    cout<< " Las horas ingresadas equivalen a : " << dias << " dias y " << horas << " horas " << endl;

    */
    /*
    //EJERCICIO 11

    //DECLARO VARIABLES

    int minutos, horas, dias, h , m;

    //INGRESO DE DATOS

    cout<< "Ingrese la cantidad de minutos : " << endl;
    cin >> minutos;

    //PROCESAMIENTO

    m = minutos % 60;
    horas = minutos / 60;
    h = horas % 24;
    dias = horas / 24;

    //SALIDA DE DATOS

    cout<< "LOs minutos ingresados equivales a : "<< dias << " dia ," << h << " horas y " << m << " minutos "<< endl;

    */
    /*
    // EJERCICIO 12

    // DECLARO VARIABLES

    int compra, importe, caja, suelto;

    //INGRESO DE DATOS

    cout<< "Ingrese la cantidad de huevos comprados : "<< endl;
    cin>> compra;

    //PROCESAMIENTO

    suelto = compra % 12 ;
    caja = (compra - suelto) / 12;

    importe = (caja * 1000) + ( suelto * 120);

    //SALIDA DE DATOS

    cout<< "El importe a pagar es de : "<< importe << endl;

    */

    /*
    // EJERCICIO 13

    //DECLARO VARIABLES

    int importe, b1000, resto1000, b500, resto500, b200, resto200, b100, resto100 ;

    //INGRESO DE DATOS

    cout<< "Ingrese el importe a retirar : " << endl;
    cin>> importe;

    //PROCESAMIENTO

    resto1000 = importe % 1000 ;
    b1000 = (importe - resto1000) / 1000;

    resto500 = resto1000 % 500 ;
    b500 = (resto1000 - resto500) / 500;

    resto200 = resto500 % 200 ;
    b200 = (resto500 - resto200) / 200;

           resto100 = resto200 % 100 ;
    b100 = (resto200 - resto100) / 100;

    //SALIDA DE DATOS

    cout << "Billetes de 1000: " << b1000 << endl;
    cout << "Billetes de 500 : " << b500  << endl;
    cout << "Billetes de 200 : " << b200  << endl;
    cout << "Billetes de 100 : " << b100  << endl;

    */

    /*
    //EJERCICIO 14

    // DECLARO VARIABLES

    double importe, descuento, importeAcobrar, descuentoAcobrar;

    //INGRESO DE DATOS

    cout<< "Ingrese el importe de la compra : "<< endl;
    cin>> importe;

    cout<< "Ingrese el descuento a aplicar : " << endl;
    cin>> descuento;

    //PROCESAMIENTO

    descuentoAcobrar = (importe * descuento ) / 100;

    importeAcobrar = importe - descuentoAcobrar;

    //SALIDA DE DATOS

    cout<< " El importe es de : " << importe << " con un descuento de : " << descuentoAcobrar << " .Total a pagar : " << importeAcobrar << endl;

    */
    /*

    //EJERCICIO 15

    int amptermica, tempMax, tempMin;

    //Ingreso de datos

    cout<<" Ingrese la temperatra maxima : " << endl;
    cin>> tempMax;

    cout<< "Ingrese la temperatura minima : " << endl;
    cin>> tempMin


    //PROCESAMIENTO

    amptermica = tempMax - tempMin;

    //SALIDA DE DATOS

    cout<< " La amplitud termica es : " << amptermica << endl;

    */


           return 0;
}
