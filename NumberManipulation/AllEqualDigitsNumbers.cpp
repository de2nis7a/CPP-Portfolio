//AllEqualDigitsNumbers.cpp

#include <iostream>
#include <fstream>
using namespace std;

// This program prints all numbers within a given interval or up to a certain length
// that have all digits equal, in ascending order.

int main() {
    ifstream f("egale.in");
    ofstream g("egale.out");

    unsigned long long T;
    f >> T;

    if (T == 1) { // interval mode
        unsigned long long a, b;
        f >> a >> b;
        unsigned long long i = 1, p = 1, v;
        do {
            v = i * p;
            if (v >= a && v <= b)
                g << v << " ";
            i++;
            if (i == 10) { // move to next repeated-digit number
                p = p * 10 + 1;
                i = 1;
            }
        } while (v <= b);
    } else { // length mode
        int x;
        f >> x;
        int nr = 1;
        do {
            for (int c = 1; c <= 9; c++) {
                for (int j = 1; j <= nr; j++)
                    g << c;
                g << " ";
            }
            nr++;
        } while (nr <= x);
    }

    return 0;
}
