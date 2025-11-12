#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char s1[100], s2[100];
    cout << "Enter first string: ";
    cin.getline(s1, 100);
    cout << "Enter second string: ";
    cin.getline(s2, 100);

    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 != len2) {
        cout << "Not anagrams";
        return 0;
    }

    sort(s1, s1 + len1);
    sort(s2, s2 + len2);

    if (strcmp(s1, s2) == 0)
        cout << "Strings are anagrams";
    else
        cout << "Strings are not anagrams";
    return 0;
}
