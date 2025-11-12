#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[50], s2[50], s3[50], sentence[200] = "";
    cout << "Enter first word: ";
    cin.getline(s1, 50);
    cout << "Enter second word: ";
    cin.getline(s2, 50);
    cout << "Enter third word: ";
    cin.getline(s3, 50);

    strcat(sentence, s1);
    strcat(sentence, " ");
    strcat(sentence, s2);
    strcat(sentence, " ");
    strcat(sentence, s3);

    cout << "Sentence: " << sentence;
    return 0;
}
