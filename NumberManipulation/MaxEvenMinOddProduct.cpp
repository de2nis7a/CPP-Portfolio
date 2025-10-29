//MaxEvenMinOddProduct.cpp

// This program reads a natural number n with at least two digits
// and calculates the product of the largest even digit and
// the smallest odd digit in n.

#include <iostream>
using namespace std;

int main()
{
    int n, maxEven = 0, minOdd = 9, digit;
    cin >> n;

    while (n != 0)
    {
        digit = n % 10;
        if (digit % 2 == 0 && digit >= maxEven)
            maxEven = digit;
        else if (digit % 2 == 1 && digit <= minOdd)
            minOdd = digit;
        n /= 10;
    }

    cout << maxEven * minOdd;
    return 0;
}
