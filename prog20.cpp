#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num, pot, res=1,i,co;
	cout<<"Ingrese el numero que quiere elevar";
	cin>>num;
	cout<<"Ingrese a que potencia desea elevarlo";
	cin>>pot;
	for(i=0; i<pot; i++){
		res*=num;
	}
	cout<<"el numero elevado al cuadrado "<<res<<"\n";

}