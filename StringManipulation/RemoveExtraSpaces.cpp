// RemoveExtraSpaces.cpp

#include <iostream>
#include <cstring>
using namespace std;

// Functionality: Reads a string containing words separated by spaces
// and removes all unnecessary spaces (leading, trailing, and multiple consecutive spaces).

int main() {
    char s[256], temp[256];
    cin.getline(s, 256);

    // Remove leading spaces

    while (s[0] == ' ') {
        strcpy(temp, s + 1);
        strcpy(s, temp);
    }

    // Remove multiple consecutive spaces
    
    int len = strlen(s);
    for (int i = 1; i < len - 1; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            strcpy(temp, s + i + 1);
            strcpy(s + i, temp);
            i--; // check again for consecutive spaces
            len--; // update length as we removed a space
        }
    }

    cout << s << endl;
    return 0;
}
