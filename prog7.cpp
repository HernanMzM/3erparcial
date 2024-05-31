#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"introduzca un numero de la baraja española\n";
    cin>>num;
    if(num==1){
        cout<<"as";
    }else if(num==10){
        cout<<"sota";
    }else if(num==11){
        cout<<"caballo";
    }else if(num==12){
        cout<<"rey";
    }else if(num>=2 && num<=9){
        cout<<"no es figura y tampoco es as";
    }else if(num>12){
        cout<<"este numero no es de la baraja española, aprende a jugar";
    }
}