#include <iostream>
using namespace std;
int main (){
	int numero,i;
	int num[5];
	for(i=0;i<=5-1;i++){
		cout<<"digite un numero para la posicion"<<i;
		cin>>numero;
		num[i]=numero;
	}
	for(i=0;i<=5-1;i++){
		cout<<"el dato en la posicion "<<i<<" es: "<<num[i]<<"\n";
	}
}