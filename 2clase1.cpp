
#include <iostream>
using namespace std;
int main(){
	int num,i=1,cont;
	int numero[num];
	cout<<"qpasa";
	for(i=1;i<=5;i++){
		cout<<"num"<<i;
		cin>>num;
		numero[i]=num;
		if(num==0){
			break;
		}
		cont=cont+numero[i];
	}
	for(i=0;i<=5;i++){
		cout<<"el en "<<i<<"esta"<<numero[i]<<"\n";
	}
	cout<<"el total de la suma es"<<cont;
}