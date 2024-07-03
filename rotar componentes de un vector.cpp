#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    int ultimoElemento = numeros.back();
    numeros.pop_back();
    numeros.insert(numeros.begin(), ultimoElemento);
    cout << "Vector rotado: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
