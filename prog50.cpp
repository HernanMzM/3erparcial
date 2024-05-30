#include <iostream>
#include <vector>
using namespace std;
int main(){
	const int filas=4;
	const int columnas=3;
	vector<vector<int>> tabla(filas, vector<int>(columnas, 0));
    vector<int> columnSums(columnas, 0);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese el valor para la fila " << i + 1 << ", columna " << j + 1 << ": " << endl;
            cin >> tabla[i][j];

            columnSums[j] += tabla[i][j];
        }
    }
    int maxsum = columnSums[0];
    int maxCol = 0;
    for (int i = 1; i < columnas; i++)
    {
        if (columnSums[i] > maxsum)
        {
            maxsum = columnSums[i];
            maxCol = i;
        }
    }
    cout << "La mayor suma de columna es: " << maxsum << endl;
    cout << "La columna con la mayor suma es la " << maxCol + 1 << endl;


}
