#include <iostream>
using namespace std;
int main(){
	int n,s=0,m=0,mn,i,co=0;
	do{cin>>n;
	co=co+1;
	s=s+n;
	if(n>m){
		m=n;
	}
	if(n<mn){
		mn=n;
	}
	}while(co<10);
	cout<<m<<" es el mas grande\n";
	cout<<mn<<" es el menor\n";
	cout<<s<<" la suma de los numeros\n";
}