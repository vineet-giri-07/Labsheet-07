#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    strcpy(rev, str);
    int len = strlen(rev);
    for (int i = 0; i < len / 2; i++)
        swap(rev[i], rev[len - i - 1]);

    if (strcmp(str, rev) == 0)
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";
    return 0;
}
