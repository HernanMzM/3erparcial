//Al programa modifica para que imprima el numero menor y mayor

#include <iostream>
using namespace std;
int main(){
	int num,menor,mayor=0;
	cout<<"ingrese 5 numeros enteros\n";
	cin>>num;
	menor=num;
	for(int i=1;i<5;i++){
		cin>>num;
		if(num<menor){
			menor=num;
		}else if(num>mayor)
		{
			mayor=num;
		}
	}
	cout<<"el numero menor es "<<menor;
	cout<<"\nel numero mayor es "<<mayor;
}
