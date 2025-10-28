//RemoveFractionalNumbers.cpp

#include <bits/stdc++.h>
using namespace std;

// Program to read a string of words, numbers, and spaces,
// and remove numbers that contain a fractional part (decimal numbers)

int main() {
    char s[101], t[101];
    int i, p1, p2, ok;

    cin.getline(s, 101); // Read input string
    i = 0;

    while(i < strlen(s)) {
        if(s[i] == ' ')
            i++;
        else {
            p1 = i;
            ok = 0;
            p2 = i;

            // Find the end of the word/number

            while(s[p2] != ' ' && s[p2] != NULL) {
                if(s[p2] == '.') ok = 1; // Check for decimal point
                p2++;
            }
            
            // If fractional number, remove it

            if(ok == 1) {
                strcpy(t, s + p2);
                strcpy(s + p1, t);
                i = p1; // Reset index to check next word
            } else {
                i = p2;
            }
        }
    }

    cout << s; // Output modified string
    return 0;
}
