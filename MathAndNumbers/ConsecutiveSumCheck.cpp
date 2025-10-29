//ConsecutiveSumCheck.cpp

#include <iostream>
using namespace std;

// This program checks if a given number 'a' can be expressed as the sum of 'b' consecutive natural numbers.

int main() {
    int a, b;
    cin >> a >> b;

    // Check if a - (sum of first b-1 numbers) is divisible by b

    if ((a - (b * (b - 1) / 2)) % b == 0)
        cout << "DA"; // Yes
    else
        cout << "NU"; // No

    return 0;
}
