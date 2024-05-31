#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num, pot, res;
	cout<<"Ingrese el numero que quiere elevar";
	cin>>num;
	cout<<"Ingrese a que potencia desea elevarlo";
	cin>>pot;

	res=pow(num,pot);
	cout<<"su numero elevado es "<<res;
}