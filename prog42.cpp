#include <iostream>
using namespace std;

int main() {
    int num[10];

    
    int posiciones;
    cout << "Digite el numero de posiciones (como maximo 10): ";
    cin >> posiciones;

   
    for (int i = 0; i < posiciones; i++) {
        
        cout << "Ingrese un numero para la posicion " << i << ": ";
        cin >> num[i];
    }

  
    int suma = 0;
    for (int i = 0; i < posiciones; i++) {
        suma += num[i];
    }

    cout << "Los datos del arreglo son: ";
    for (int i = 0; i < posiciones; i++) {
        cout << num[i] << " ";
    }

  
    cout << "\nLa suma de los datos es: " << suma << endl;

    return 0;
}
