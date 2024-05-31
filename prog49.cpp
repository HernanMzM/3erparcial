//no imprime los numeros al reverso
#include <iostream>
using namespace std;
int main(){
	int num,i,cont=0;
	int numero[5];
	cout<<"qpasa";
	for(i=1;i<=5;i++){
		cout<<"ingresa un numero "<<i<<":\n";
		cin>>num;
		numero[i]=num;
		if(num==0){
			break;
		}
		cont=cont+numero[i];
	}
	for(i=5;i>=1;i--){
		cout<<"el en "<< i<<" esta "<<numero[i]<<"\n";
	}
	cout<<"el total de la suma es"<<cont;
}
