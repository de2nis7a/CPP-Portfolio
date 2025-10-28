#include <bits/stdc++.h>
using namespace std;

// Program to capitalize the first and last letter of each word in a sentence

int main() {
    char s[256];
    cin.getline(s, 256);

    for(int i = 0; s[i] != '\0'; i++) {

        // Capitalize first letter of a word

        if(i == 0 || (s[i-1] == ' ' && s[i] != ' '))
            s[i] = s[i] + 'A' - 'a';

        // Capitalize last letter of a word
        
        else if((s[i+1] == ' ' || s[i+1] == '\0') && s[i] != ' ')
            s[i] = s[i] + 'A' - 'a';
    }

    cout << s;
    return 0;
}
