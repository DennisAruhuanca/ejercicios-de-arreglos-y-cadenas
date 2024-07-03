#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    reverse(numeros.begin(), numeros.end());
    cout << "Vector invertido: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
