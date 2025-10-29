//SumNaturalNumbers.cpp

#include <iostream>

using namespace std;

int main()
{
    long long n; // input number
    long long s = 0; // sum of natural numbers

    cin >> n;

    s = (n + 1) * n / 2;

    cout << s;

    return 0;
}
