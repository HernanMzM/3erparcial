#include <iostream>
using namespace std;
int main(){
	int num,menor;
	cout<<"ingrese 5 numeros enteros\n";
	cin>>num;
	menor=num;
	for(int i=1;i<5;i++){
		cin>>num;
		if(num<menor){
			menor=num;
		}
	}
	cout<<"el numero menor es "<<menor;
}