// ConsecutiveVowels.cpp

#include <bits/stdc++.h>
using namespace std;

// This program reads a string representing a sentence composed of 
// lowercase English letters and spaces.
// It counts and outputs the number of pairs of consecutive vowels 
// present in the sentence.

int main ()
{
    char s[256];
    int i, ok = 0;
    cin.getline(s, 256);

    for(i = 0; i < strlen(s) - 1; i++)
        if(strchr("aeiou", s[i]) && strchr("aeiou", s[i+1]))
            ok++;

    cout << ok;
}
