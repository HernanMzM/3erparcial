#include <iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"ingresa tu primer numero\n";
	cin>>n1;
	cout<<"ingresa el segundo numero\n";
	cin>>n2;
	cout<<"ingresa el tercer numero\n";
	cin>>n3;
	if(n1==1 && n2==2 && n3==3){
		cout<<"acceso permitido";
	}else{
		cout<<"acceso denegado";
	}
}