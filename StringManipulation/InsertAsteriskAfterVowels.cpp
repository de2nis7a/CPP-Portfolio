//InsertAsteriskAfterVowels.cpp

#include <bits/stdc++.h>
using namespace std;

// Program to insert '*' after each vowel in a given text

int main() {
    char s[101], t[101];
    cin.getline(s, 101);
    int i, ok = 0;

    // Iterate from the end to avoid overwriting while shifting

    for(i = strlen(s) - 1; i >= 0; i--) {
        if(strchr("aeiou", s[i])) {
            strcpy(t, s + i);
            strcpy(s + i + 1, t);
            s[i + 1] = '*';
            ok++;
        }
    }

    if(ok >= 1)
        cout << s << endl;
    else
        cout << "NO VOWELS";

    return 0;
}
