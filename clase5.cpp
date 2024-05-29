#include <iostream>
using namespace std;
int main (){
	int t,i,acum=0,num;
	cout<<"digite el tamano del vector [arreglo]";
	cin>>t;
	int vector[t];
	
	for(i=1;i<=t;i++){
		cout<<"digite un numero";
		cin>>num;
		vector[i]=num;
		acum=acum+vector[i];
	}
	for(i=1;i<=t;i++){
		cout<<"la suma de "<<vector[i]<<"\n";
	}
	cout<<"es"<<acum;
}