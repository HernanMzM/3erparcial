#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char pass[12],name[20];
	int co,i,precio,cantidad,total,co2;
	co=0;
	do{
		co=co+1;
		cout<<"usuario:\n";
		cin>>name;
		cout<<"contraseña:\n";
		cin>>pass;
		if(strcmp(pass,"2b26")==0 && strcmp(name,"Hernan")==0){
			cout<<"Bienvenido al sistema\n";
			break;
		}
			if (co >= 3) {
        cout<<"Has excedido el número máximo de intentos\n";
    	}
    }while(co<3);
}