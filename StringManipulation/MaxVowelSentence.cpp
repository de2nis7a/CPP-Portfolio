//MaxVowelSentence.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("vocmax.in");
    ofstream fout("vocmax.out");

    char s[251], maxSentence[251];
    int n, nr, i, j, maxVowels = 0;

    fin >> n;
    fin.getline(s, 251); // consume the newline after n

    for(i = 1; i <= n; i++) {
        fin.getline(s, 251);
        nr = 0;

        // Count vowels in the sentence
        
        for(j = 0; j < strlen(s); j++)
            if(strchr("aeiou", s[j]))
                nr++;

        if(nr > maxVowels) {
            maxVowels = nr;
            strcpy(maxSentence, s);
        }
    }

    fout << maxSentence;
    return 0;
}
