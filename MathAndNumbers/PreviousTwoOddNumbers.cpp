//PreviousTwoOddNumbers.cpp

#include <iostream>
using namespace std;

//Finds the two largest odd numbers smaller than a given natural number n.

int main() {
    long long n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Previous two odd numbers: " << n - 3 << " " << n - 1 << endl;
    else
        cout << "Previous two odd numbers: " << n - 4 << " " << n - 2 << endl;

    return 0;
}