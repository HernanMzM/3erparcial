#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char pass[12],root[20];
	int co,i;
	co=0;

	do{
		co=co+1;
		cout<<" nombre de user ";
		cin>>root;
		cout<<" contrasena ";
		cin>>pass;
		if(strcmp(pass,"1234")==0 && strcmp(root,"root")==0){
			cout<<"Bienvenido al sistema";
			break;
		}
			if (co >= 3) {
        cout<<"Has excedido el número máximo de intentos\n";
    }
	}while(co<3);
	cout<<"numero de intentos realizados "<<nco;
}