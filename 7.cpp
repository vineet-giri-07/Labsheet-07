#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];
    cout << "Enter first string: ";
    cin.getline(s1, 100);
    cout << "Enter second string: ";
    cin.getline(s2, 100);

    int result = strcmp(s1, s2);
    if (result == 0)
        cout << "Strings are equal";
    else if (result > 0)
        cout << "First string is greater";
    else
        cout << "Second string is greater";
    return 0;
}
