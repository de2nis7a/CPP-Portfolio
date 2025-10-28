// CapsLockSimulator.cpp

#include <cstring>
#include <fstream>
using namespace std;

// Functionality: Simulates a CapsLock effect. Reads a line of text 
// from "capslock.in", where '#' represents pressing the CapsLock key. 
// Outputs the resulting text to "capslock.out", converting letters 
// to uppercase when CapsLock is active.

int main() {
    ifstream f("capslock.in");
    ofstream g("capslock.out");
    char s[256];
    f.getline(s, 256);

    int capsActive = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (capsActive)
                g << char(s[i] - 32); // convert to uppercase
            else
                g << s[i];
        } else if (s[i] == ' ') {
            g << s[i];
        } else if (s[i] == '#') {
            capsActive = !capsActive; // toggle CapsLock state
        }
    }

    return 0;
}
