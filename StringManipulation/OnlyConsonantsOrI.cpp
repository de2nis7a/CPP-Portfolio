//OnlyCons`onantsOrI.cpp

#include <bits/stdc++.h>
using namespace std;

// Program to check if a word contains only consonants and optionally the vowel 'i'

int main() {
    char s[101];
    cin >> s;
    int i = 0, ok = 0, cnt = 0;

    while(s[i] != '\0') {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u')
            ok++;
        else if(s[i]=='i')
            cnt++;
        i++;
    }

    if(ok == 0 && cnt != strlen(s))
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
