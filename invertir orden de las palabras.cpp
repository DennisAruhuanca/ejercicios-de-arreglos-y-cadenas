#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string invertirPalabras(string frase) {
    stringstream ss(frase);
    string palabra;
    vector<string> palabras;
    while (getline(ss, palabra, ' ')) {
        palabras.push_back(palabra);
    }
    reverse(palabras.begin(), palabras.end());
    string resultado;
    for (string p : palabras) {
        resultado += p + " ";
    }
    return resultado.substr(0, resultado.length() - 1); // Eliminar el último espacio
}

int main() {
    string frase = "El rápido zorro marrón saltó sobre el perro perezoso";
    string fraseInvertida = invertirPalabras(frase);
    cout << "Frase original: " << frase << endl;
    cout << "Frase con palabras invertidas: " << fraseInvertida << endl;
    return 0;
}
