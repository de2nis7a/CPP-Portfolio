//SortThreeDigits.cpp

#include <iostream>
using namespace std;

// This program reads a three-digit natural number and displays its digits in ascending order.

int main() {
    int x, cu, cs, cz, cmin, cmax, cmij;
    cin >> x;

    cu = x % 10;
    cz = x / 10 % 10;
    cs = x / 100;

    cmin = min(cu, min(cz, cs));
    cmax = max(cu, max(cz, cs));
    cmij = cu + cz + cs - cmax - cmin;

    cout << cmin << " " << cmij << " " << cmax;
    return 0;
}
