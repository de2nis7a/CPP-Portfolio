// ReplaceThreeLetterWords.cpp

#include <bits/stdc++.h>
using namespace std;

// Program that reads a string of lowercase words separated by spaces
// Replaces every word with exactly three letters with the symbol '*'

int main() {
    char s[256], a[101][101];
    cin.getline(s, 256); // Read input string

    int i = 0, j = 0, m = 1;

    // Split the string into words

    while(s[i]) {
        if(s[i] == ' ') {
            j = 0;
            m++;
        } else {
            a[m][j] = s[i];
            j++;
        }
        i++;
    }

    // Output modified string
    
    for(int i = 1; i <= m; ++i) {
        if(strlen(a[i]) != 3)
            cout << a[i] << ' ';
        else
            cout << "*" << ' ';
    }

    return 0;
}
