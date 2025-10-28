// AnagramsCheck.cpp

#include <iostream>
#include <cstring>
using namespace std;

// This program reads two words from the user
// It checks if the two words are anagrams of each other
// by comparing the sorted versions of the words.
// Outputs 1 if they are anagrams, 0 otherwise.

int main()
{
    char s[21], a[21];
    cin >> s >> a;

    if(strlen(s) != strlen(a)) {
        cout << 0; // Words of different lengths can't be anagrams
    } else {

        // Sort first word

        for(int i = 0; i < strlen(s); i++)
            for(int j = i+1; j < strlen(s); j++)
                if(s[i] > s[j]) {
                    char aux = s[i];
                    s[i] = s[j];
                    s[j] = aux;
                }

        // Sort second word

        for(int i = 0; i < strlen(a); i++)
            for(int j = i+1; j < strlen(a); j++)
                if(a[i] > a[j]) {
                    char aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }

        // Compare sorted words
        
        if(strcmp(s, a) == 0)
            cout << 1;
        else
            cout << 0;
    }
}
