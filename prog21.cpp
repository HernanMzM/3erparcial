#include <iostream>
using namespace std;
int main(){
	int n,s=0,m=0,mn,i;
	for(i=0;i<10;i++){
		cin>>n;
		s=s+n;
		if(n>m){
			m=n;
		}
		if(n<mn){
			mn=n;
		}
	}
	cout<<m<<" es el mas grande\n";
	cout<<mn<<" es el menor\n";
	cout<<s<<" la suma de los numeros\n";
}