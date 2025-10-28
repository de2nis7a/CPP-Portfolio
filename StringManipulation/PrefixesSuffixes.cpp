//PrefixesSuffixes.cpp

#include <bits/stdc++.h>
using namespace std;

// Program to display all prefixes and suffixes of a given word

int main() {
    char s[101];
    cin >> s;

    // Print all prefixes

    for(int k = strlen(s) - 1; k >= 0; k--) {
        for(int i = 0; i <= k; i++)
            cout << s[i];
        cout << endl;
    }

    // Print all suffixes
    
    for(int i = 0; i < strlen(s); i++) {
        for(int j = i; j < strlen(s); j++)
            cout << s[j];
        cout << endl;
    }

    return 0;
}
