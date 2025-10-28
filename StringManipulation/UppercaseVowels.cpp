// UppercaseVowels.cpp

#include <iostream>
#include <cstring>
using namespace std;

// Functionality: Reads a lowercase string and converts all vowels 
// ('a', 'e', 'i', 'o', 'u') to their uppercase counterparts.

int main() {
    char str[21];
    cin >> str;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = str[i] - 32; // convert to uppercase
        }
    }

    cout << str << endl;
    return 0;
}
