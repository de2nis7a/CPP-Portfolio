//PerfectSquareCheck.cpp

#include <iostream>
#include <cmath>
using namespace std;

//Reads a natural number and checks if it is a perfect square.

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int root = (int)sqrt(n);
    if (root * root == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}