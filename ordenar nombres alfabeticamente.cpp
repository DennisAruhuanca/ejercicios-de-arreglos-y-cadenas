#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<string> nombres;
    string nombre;
    cout << "Ingrese los nombres (presione Enter para terminar):" << endl;
    while (getline(cin, nombre) && !nombre.empty()) {
        nombres.push_back(nombre);
    }
    sort(nombres.begin(), nombres.end());
    cout << "Nombres ordenados alfabéticamente:" << endl;
    for (const auto& n : nombres) {
        cout << n << endl;
    }
    return 0;
}
