#include <iostream>
#include <vector>

using namespace std;

bool esCapicua(int numero) {
    vector<int> digitos(10);
    for (int i = 0; i < 10; i++) {
        digitos[i] = numero % 10;
        numero /= 10;
    }
    for (int i = 0; i < 5; i++) {
        if (digitos[i] != digitos[9 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero = 1234321;
    if (esCapicua(numero)) {
        cout << "El número " << numero << " es capicúa." << endl;
    } else {
        cout << "El número " << numero << " no es capicúa." << endl;
    }
    return 0;
}
