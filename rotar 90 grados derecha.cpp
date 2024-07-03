#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotarMatriz(vector<vector<int>> matriz) {
    int n = matriz.size();
    vector<vector<int>> resultado(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[j][n - 1 - i] = matriz[i][j];
        }
    }
    return resultado;
}

int main() {
    vector<vector<int>> matriz = {{1, 2, 3},
                                 {4, 5, 6},
                                 {7, 8, 9}};
    vector<vector<int>> matrizRotada = rotarMatriz(matriz);
    cout << "Matriz original:" << endl;
    for (const auto& fila : matriz) {
        for (int num : fila) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << "\nMatriz rotada 90 grados a la derecha:" << endl;
    for (const auto& fila : matrizRotada) {
        for (int num : fila) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
