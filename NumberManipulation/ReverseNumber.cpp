//ReverseNumber.cpp

#include <iostream>
using namespace std;

// Function to return the reversed form of a natural number
// The function takes an integer as input and constructs its reverse

int reverseNumber(int a) {
    int rev = 0;
    while (a > 0) {
        rev = rev * 10 + a % 10;
        a /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "Reversed number: " << reverseNumber(num) << endl;
    return 0;
}
