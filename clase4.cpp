#include <iostream>
using namespace std;
int main (){
	int i;
	string arreglo1[2],arreglo2[3];
		arreglo1[1]="Fernando";
		arreglo1[2]="Oscar";
		arreglo2[1]=74;
		arreglo2[2]=56;
		arreglo2[3]=10;
	cout<<"arreglo 1";
	for(i=1;i<=2;i++){
		cout<<"el dato en la posicion"<<i<<" es: "<<arreglo1[i]<<"\n";
	}
	cout<<"arreglo 2";
	for(i=1;i<=3;i++){
		cout<<"el dato en la posicion "<<i<<" es: "<<arreglo2[i]<<"\n";
	}
	return 0;
}