// MostFrequentVowel.cpp

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

// Functionality: Reads a sentence from standard input and determines 
// the vowel (A, E, I, O, U) that occurs the most. Letter case is ignored.

int main() {
    char s[260];
    int nra=0, nre=0, nri=0, nro=0, nru=0, nrmax=0;

    cin.getline(s, 260);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i]=='a' || s[i]=='A') nra++;
        if (s[i]=='e' || s[i]=='E') nre++;
        if (s[i]=='i' || s[i]=='I') nri++;
        if (s[i]=='o' || s[i]=='O') nro++;
        if (s[i]=='u' || s[i]=='U') nru++;
    }

    nrmax = max({nra, nre, nri, nro, nru});

    if (nrmax == nra) cout << 'A';
    if (nrmax == nre) cout << 'E';
    if (nrmax == nri) cout << 'I';
    if (nrmax == nro) cout << 'O';
    if (nrmax == nru) cout << 'U';

    return 0;
}
