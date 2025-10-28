// AcronymGenerator.cpp

#include <iostream>
#include <cstring>
using namespace std;

// Functionality: Reads a text representing the name of an institution 
// or organization (words separated by spaces, starting with uppercase letters) 
// and constructs the corresponding acronym using the first uppercase letter of each word.

int main() {
    char input[101], acronym[101];
    cin.getline(input, 101);

    int pos = -1;
    if (input[0] >= 'A' && input[0] <= 'Z') {
        pos++;
        acronym[pos] = input[0];
    }

    for (int i = 1; i < strlen(input); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z' && input[i-1] == ' ') {
            pos++;
            acronym[pos] = input[i];
        }
    }

    pos++;
    acronym[pos] = '\0'; // null-terminate the string
    cout << acronym << endl;

    return 0;
}
