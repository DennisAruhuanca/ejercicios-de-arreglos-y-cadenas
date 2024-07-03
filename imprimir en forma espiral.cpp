#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> crearMatriz() {
    return {{1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};
}

void imprimirMatrizEnEspiral(vector<vector<int>> matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    int top = 0, bottom = filas - 1, left = 0, right = columnas - 1;
    while (top <= bottom && left <= right) {
        // Imprimir fila superior
        for (int i = left; i <= right; i++) {
            cout << matriz[top][i] << " ";
        }
        top++;

        // Imprimir columna derecha
        for (int i = top; i <= bottom; i++) {
            cout << matriz[i][right] << " ";
        }
        right--;

        // Imprimir fila inferior
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matriz[bottom][i] << " ";
            }
            bottom--;
        }

        // Imprimir columna izquierda
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matriz[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    vector<vector<int>> matriz = crearMatriz();
    imprimirMatrizEnEspiral(matriz);
    cout << endl;
    return 0;
}
