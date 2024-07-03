#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {-5, 10, -3, 7, -2, 8, 4, -1, 6, -4};
    int sumaPositivos = 0, sumaNegativos = 0;
    for (int num : numeros) {
        if (num >= 0) {
            sumaPositivos += num;
        } else {
            sumaNegativos += num;
        }
    }
    cout << "Suma de elementos positivos: " << sumaPositivos << endl;
    cout << "Suma de elementos negativos: " << sumaNegativos << endl;
    return 0;
}
