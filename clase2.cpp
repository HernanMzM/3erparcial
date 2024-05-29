#include <iostream>
using namespace std;
int main (){
	int i,n;
	string nombre;
	cout<<"digite un numero de posiciones";
	cin>>n;
	string personas[n];
	for(i=0;i<=n-1;i++){
		cout<<"digite un nombre para la posicion"<<i;
		cin>>nombre;
		personas[i]=nombre;
	}
	for(i=0;i<=n-1;i++){
		cout<<"el dato en la posicion "<<i<<" es: "<<personas[i]<<"\n";
	}
}