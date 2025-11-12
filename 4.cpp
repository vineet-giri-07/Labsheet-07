#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], copy1[100], copy2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    strcpy(copy1, str1);
    strcpy(copy2, str2);

    if (strcmp(copy1, copy2) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
    return 0;
}
