#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    vector<int> numeros(30);
    for (int i = 0; i < 30; i++) {
        numeros[i] = rand() % 901 + 100; // Generar números entre 100 y 1000
    }
    sort(numeros.begin(), numeros.end());
    int media = 0, moda = 0, mediana;
    int contadorModa = 0, maxContador = 0;
    for (int num : numeros) {
        media += num;
    }
    media /= 30;
    if (numeros.size() % 2 == 0) {
        mediana = (numeros[numeros.size() / 2 - 1] + numeros[numeros.size() / 2]) / 2;
    } else {
        mediana = numeros[numeros.size() / 2];
    }
    for (int num : numeros) {
        int contador = count(numeros.begin(), numeros.end(), num);
        if (contador > maxContador) {
            maxContador = contador;
            moda = num;
        }
    }
    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    cout << "Moda: " << moda << endl;
    return 0;
}
