#include <iostream>
#include <string>

using namespace std;

int contarLetra(string cadena, char letra) {
    int contador = 0;
    for (char c : cadena) {
        if (c == letra) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string entrada;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, entrada);
    char letraBuscada;
    cout << "Ingrese la letra a buscar: ";
    cin >> letraBuscada;
    int ocurrencias = contarLetra(entrada, letraBuscada);
    cout << "La letra '" << letraBuscada << "' aparece " << ocurrencias << " veces en la cadena." << endl;
    return 0;
}
