#include <iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"ingrese el primer numero";
	cin>>n1;
	cout<<"ingrese el segundo numero";
	cin>>n2;
	cout<<"ingrese el tercer numero";
	cin>>n3;
	if(n1<=n2 && n1<=n3){
		if(n2<=n3){
			cout<<n1 << n2 << n3;
		}else{
			cout<< n1 << n3 << n2;
		}
	}
	else if(n2<=n1 && n2<=n3){
		if(n1<=n3){
			cout<<n2 << n1 << n3;
		}else{
			cout<< n2 << n3 << n1;
		}
	}
	else if(n3<=n2 && n3<=n1){
		if(n1<=n2){
			cout<<n3 << n1 << n2;
		}else{
			cout<< n3 << n2 << n1;
		}
	}
}