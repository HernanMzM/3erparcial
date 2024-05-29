#include <iostream>
using namespace std;

int main() {
  int f, c;

  cout << "Digite el numero de filas: ";
  cin >> f;

  cout << "Digite el numero de columnas: ";
  cin >> c;

  int matriz[f][c];

  for (int i = 0; i < f; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Digite dato para la fila " << i + 1 << " columna " << j + 1 << ": ";
      cin >> matriz[i][j];
    }
  }

  cout << "Los datos que hay en la matriz son:\n";
  for (int i = 0; i < f; i++) {
    for (int j = 0; j < c; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
