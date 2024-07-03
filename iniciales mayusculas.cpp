#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string convertirAMayusculasIniciales(string frase) {
    string resultado;
    bool esInicioDePalabra = true;
    for (char c : frase) {
        if (esInicioDePalabra) {
            resultado += toupper(c);
            esInicioDePalabra = false;
        } else {
            resultado += tolower(c);
        }
        if (c == ' ') {
            esInicioDePalabra = true;
        }
    }
    return resultado;
}

int main() {
    string frase = "cáceres patrimonio de la humanidad";
    cout << convertirAMayusculasIniciales(frase) << endl; // Salida: "Cáceres Patrimonio De La Humanidad"
    return 0;
}
