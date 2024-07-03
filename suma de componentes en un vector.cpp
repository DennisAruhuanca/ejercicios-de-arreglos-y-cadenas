#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumaImpar = 0, sumaPar = 0;
    for (int i = 0; i < numeros.size(); i++) {
        if (i % 2 == 0) {
            sumaPar += numeros[i];
        } else {
            sumaImpar += numeros[i];
        }
    }
    cout << "Suma de componentes de índice par: " << sumaPar << endl;
    cout << "Suma de componentes de índice impar: " << sumaImpar << endl;
    return 0;
}
