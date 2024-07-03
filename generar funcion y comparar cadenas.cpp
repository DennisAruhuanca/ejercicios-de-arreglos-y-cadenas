#include <iostream>

using namespace std;

int mistrcmp(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Adios";
    cout << "Comparación de cadenas:" << endl;
    cout << "mistrcmp(\"Hola\", \"Hola\") = " << mistrcmp(str1, str2) << endl;
    cout << "mistrcmp(\"Hola\", \"Adios\") = " << mistrcmp(str1, str3) << endl;
    cout << "mistrcmp(\"Adios\", \"Hola\") = " << mistrcmp(str3, str1) << endl;
    return 0;
}
