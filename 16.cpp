#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int count = 1;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ')
            count++;

    cout << "Number of words: " << count;
    return 0;
}
