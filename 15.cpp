#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainStr[100], sub[50];
    cout << "Enter main string: ";
    cin.getline(mainStr, 100);
    cout << "Enter string to search: ";
    cin.getline(sub, 50);

    if (strstr(mainStr, sub))
        cout << "String found!";
    else
        cout << "String not found!";
    return 0;
}
