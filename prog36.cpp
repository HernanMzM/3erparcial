#include <iostream>
using namespace std;
int main (){
	int numero,i,n;
	cout<<"digite el tamaño del arreglo";
	cin>>n;
	int num[n];
	for(i=1;i<=n;i++){
		cout<<"digite un numero para la posicion"<<i;
		cin>>numero;
		num[i]=numero;
	}
	for(i=1;i<=n;i++){
		cout<<"el dato en la posicion "<<i<<" es: "<<num[i]<<"\n";
	}
}
