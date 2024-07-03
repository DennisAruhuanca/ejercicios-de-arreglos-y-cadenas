#include <iostream>
#include <string>

using namespace std;

int contarPalabras(string frase) {
    int contador = 0;
    bool enPalabra = false;
    for (char c : frase) {
        if (c == ' ') {
            if (enPalabra) {
                contador++;
                enPalabra = false;
            }
        } else {
            enPalabra = true;
        }
    }
    if (enPalabra) {
        contador++;
    }
    return contador;
}

int main() {
    string frase = "El rápido zorro marrón saltó sobre el perro perezoso";
    int numPalabras = contarPalabras(frase);
    cout << "La frase contiene " << numPalabras << " palabras." << endl;
    return 0;
}
