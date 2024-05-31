#include <iostream>
using namespace std;
#include <math.h>
int main(){
    int num1,num2,num3,rtd,op;
    cout<<"1. Calcular el area de un triangulo\n";
    cout<<"2. Calcular el area de un trapecio\n";
    cout<<"3. Calcular el area de un rectangulo\n";
    cout<<"seleccione la opcion que desee\n";
    cin>>op;
    switch(op){
        case 1:
            cout<<"ingrese la base y luego la altura del triangulo\n";
            cin>>num1>>num2;
            rtd=(num1*num2)/2;
            cout<<"el area del triangulo es "<<rtd;
            break;
        case 2:
            cout<<"Introduzca la base mayor y luego la base menor y al final ponga la altura\n";
            cin>>num1>>num2>>num3;
            rtd=((num1+num2)/2)*num3;
            cout<<"el area del trapecio es "<<rtd;
            break;
        case 3:
            cout<<"ingrese la base y luego la altura del rectangulo\n";
            cin>>num1>>num2;
            rtd=(num1*num2);
            cout<<"el area del rectangulo es "<<rtd;
            break;
    }
}