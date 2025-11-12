#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        swap(str[i], str[len - i - 1]);

    cout << "Reversed string: " << str;
    return 0;
}
