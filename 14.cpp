#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[50];
    cout << "Enter main string: ";
    cin.getline(str, 100);
    cout << "Enter substring: ";
    cin.getline(sub, 50);

    char *ptr = strstr(str, sub);
    if (ptr)
        cout << "Substring found at position: " << (ptr - str);
    else
        cout << "Substring not found";
    return 0;
}
