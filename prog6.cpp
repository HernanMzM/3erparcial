#include <iostream>
using namespace std;
int main()
{
    int salario,horas,semana,extra;
    cout<<"Ingrese su salario cobrado por hora\n";
    cin>>salario;
    cout<<"ingrese sus horas trabajadas\n";
    cin>>horas;
    if(horas>=40 && horas<50){
        semana=(40*salario)+((horas-40)*(salario+(salario*.50)));
        cout<<"Su salario semanal es de: "<<semana;
    }
    else if(horas>50){
        extra=(40*salario)+((horas-40)*(salario*2));
        cout<<"su salario semanal es de: "<<extra;
    }else{
        cout<<"CHAMBEA";
    }
    
}