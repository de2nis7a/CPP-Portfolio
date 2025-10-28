// VowelsBetweenConsonants.cpp

#include <iostream>
#include <cstring>
using namespace std;

// Functionality: Counts the number of vowels in a string that are 
// directly between two consonants. Only lowercase English letters are considered.

int main() {
    char str[256];
    cin.getline(str, 256);

    int count = 0;
    int len = strlen(str);

    for (int i = 1; i < len - 1; i++) {
        char prev = str[i - 1];
        char curr = str[i];
        char next = str[i + 1];

        bool isVowel = (curr == 'a' || curr == 'e' || curr == 'i' || curr == 'o' || curr == 'u');
        bool prevConsonant = (prev >= 'a' && prev <= 'z') && !(prev == 'a' || prev == 'e' || prev == 'i' || prev == 'o' || prev == 'u');
        bool nextConsonant = (next >= 'a' && next <= 'z') && !(next == 'a' || next == 'e' || next == 'i' || next == 'o' || next == 'u');

        if (isVowel && prevConsonant && nextConsonant) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
