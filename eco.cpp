#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);
    stringstream ss(entrada);
    string palabra;
    while (getline(ss, palabra, ' ')) {
        cout << palabra << endl;
    }
    return 0;
}
