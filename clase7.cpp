#include <iostream>
using namespace std;
int main()
{
	int acum1=0, acum2=0;
	int t,num,i;
	cout<<"digite el tamano del vector 1";
	cin>>t;
	int vector1[t];
	for(i=1;i<=t;i++){
		cin>>num;
		vector1[i]=num;
		acum1=acum1+vector1[i];
		
	}
	cout<<"digite el tamano del vector 2";
	cin>>t;
	int vector2[t];
	for(i=1;i<=t;i++){
		cout<<"digite un numero "<<i;
		cin>>num;
		vector2[i]=num;
		acum2=acum2+vector2[i];
	}
	int vector3[2];
	vector3[1]=acum1+acum2;
	cout<<"resultado total "<<vector3[1];
}