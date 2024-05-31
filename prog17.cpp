//el programa se pausa cuando se pone un 0
#include <iostream>
using namespace std;
int main(){
	int i,n,co,ac=0;
	co=-1;
	do{
		cout<<"introduzca un numero \n";
		cin>>n;
		cout<<"has introducido un "<<n<<"\n";
		ac=ac+n;
		co=co+1;
	}while(n>0);
	cout<<"has introducido "<<co<<" numeros";
	cout<<"\nla suma de los numeros es "<<ac;
}