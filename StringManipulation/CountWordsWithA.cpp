//CountWordsWithA.cpp

#include <bits/stdc++.h>
using namespace std;

// Program that reads a string of lowercase words separated by spaces
// Counts the number of words that contain the letter 'a'

int main() {
    char s[71];
    cin.getline(s, 71); // Read input string

    int i = 0, found = 0, count = 0;
    while(s[i] != '\0') {
        if(s[i] == 'a' && found == 0) {
            found = 1;
            count++;
        }
        if(s[i] == ' ')
            found = 0;
        i++;
    }

    cout << count;
    return 0;
}
