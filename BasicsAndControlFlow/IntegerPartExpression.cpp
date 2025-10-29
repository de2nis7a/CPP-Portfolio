//IntegerPartExpression.cpp

#include <iostream>
#include <cmath>
using namespace std;

// This program reads a natural number 'a' and prints the integer part of a given expression.

int main() {
    int a;
    cin >> a;

    int b = a*a + a*a*a*a;
    int c = 3*b / (b + sqrt(b)) + sqrt(b);

    cout << c;
    return 0;
}
