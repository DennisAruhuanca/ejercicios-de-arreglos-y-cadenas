#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);
    string digitosStr = "";
    for (char c : entrada) {
        if (isdigit(c)) {
            digitosStr += c;
        }
    }
    int n = atoi(digitosStr.c_str());
    n += 2;
    cout << "Valor final de n: " << n << endl;
    return 0;
}
