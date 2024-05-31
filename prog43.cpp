#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cout << "Digite el numero de paises: ";
  cin >> n;

  string paises[n];

  for (int i = 0; i < n; i++) {
    cout << "Digite pais " << i + 1 << ": ";
    cin >> paises[i];
  }

  int pos;
  cout << "Digite la posicion: ";
  cin >> pos;

  if (pos >= 0 && pos < n) {
    cout << "El pais que hay en la posicion " << pos << " es: " << paises[pos] << endl;
  } else {
    cout << "Posicion invalida" << endl;
  }

  return 0;
}
