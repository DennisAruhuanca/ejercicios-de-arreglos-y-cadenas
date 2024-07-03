#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;
    vector<int> numeros(n);
    cout << "Ingrese los números:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    int mayor = *max_element(numeros.begin(), numeros.end());
    int menor = *min_element(numeros.begin(), numeros.end());
    int contadorMayor = count(numeros.begin(), numeros.end(), mayor);
    int contadorMenor = count(numeros.begin(), numeros.end(), menor);
    cout << "El número mayor es " << mayor << " y aparece " << contadorMayor << " veces." << endl;
    cout << "El número menor es " << menor << " y aparece " << contadorMenor << " veces." << endl;
    return 0;
}
