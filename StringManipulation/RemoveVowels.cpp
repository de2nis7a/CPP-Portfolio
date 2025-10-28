//RemoveVowels.cpp

#include <bits/stdc++.h>
using namespace std;

// This program reads a string of lowercase English letters from input
// and removes all vowels ('a', 'e', 'i', 'o', 'u') from it.

int main() {
    char s[21], t[21];
    int i;
    cin.getline(s, 21);

    for(i = 0; i <= strlen(s) - 1; i++) {
        if(strchr("aeiou", s[i])) {
            strcpy(t, s + i + 1);
            strcpy(s + i, t);
            i--;
        }
    }

    cout << s;
    return 0;
}
