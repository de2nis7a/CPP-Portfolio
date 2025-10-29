//AsciiParityCheck.cpp

// This program reads a file with ASCII characters transmitted with a parity bit
// and verifies whether the transmission was correct. If any character fails
// the parity check, it outputs the positions of the wrong characters.

#include <bits/stdc++.h>
using namespace std;

ifstream in("paritate.in");
ofstream out("paritate.out");

char received[60001];
int wrongPositions[60001];

int main() {
    char t, bit;
    bool wrong = false;
    int onesCount, ctr = 0, wrongCtr = 0;

    while (in) {
        onesCount = 0;
        t = 0;
        in >> bit;
        if (bit == '1') onesCount++;

        // Read the remaining 7 bits of the ASCII code
       
        for (int i = 6; i >= 0; i--) {
            in >> bit;
            if (bit == '1') {
                onesCount++;
                t += (1 << i);
            }
        }

        if (onesCount % 2) {
            wrong = true;
            wrongPositions[wrongCtr++] = ctr;
        }

        if (!wrong) {
            received[ctr] = t;
        }

        ctr++;
    }

    if (wrong) {
        out << "NU\n"; // no
        for (int i = 0; i < wrongCtr; i++)
            out << wrongPositions[i] << " ";
    } else {
        out << "DA\n"; //yes
        for (int i = 0; i < ctr - 1; i++) {
            if (received[i] == 10)
                out << '\n';
            else
                out << received[i];
        }
    }

    return 0;
}
