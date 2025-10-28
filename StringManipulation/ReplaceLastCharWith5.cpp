// ReplaceLastCharWith5.cpp

#include <bits/stdc++.h>
#include <fstream>
#include <cstring>
using namespace std;

// Functionality: Reads a line from "prosir.in" and replaces the last letter
// of each word with the digit '5'. The result is written to "prosir.out".

int main() {
    ifstream f("prosir.in");
    ofstream g("prosir.out");
    char S[201];

    f.getline(S, 201);

    for (int i = 0; i <= strlen(S) - 2; i++) {
        if (S[i] >= 'a' && S[i] <= 'z' && (S[i+1] == ' ' || S[i+1] == '.')) {
            S[i] = '5';
        }
    }

    g << S;
    return 0;
}
