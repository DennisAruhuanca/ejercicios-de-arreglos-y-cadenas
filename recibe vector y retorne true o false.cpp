#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool estaOrdenado(vector<int> numeros, int longitud) {
    for (int i = 1; i < longitud; i++) {
        if (numeros[i] < numeros[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numerosOrdenados = {1, 2, 3, 4, 5};
    vector<int> numerosDesordenados = {3, 1, 4, 2, 5};
    if (estaOrdenado(numerosOrdenados, numerosOrdenados.size())) {
        cout << "El vector está ordenado." << endl;
    } else {
        cout << "El vector no está ordenado." << endl;
    }
    if (estaOrdenado(numerosDesordenados, numerosDesordenados.size())) {
        cout << "El vector está ordenado." << endl;
    } else {
        cout << "El vector no está ordenado." << endl;
    }
    return 0;
}
