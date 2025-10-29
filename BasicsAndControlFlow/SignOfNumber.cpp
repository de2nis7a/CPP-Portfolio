//SignOfNumber.cpp

#include <iostream>
using namespace std;

//Reads an integer and determines its sign (positive, negative, or zero).

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0)
        cout << "Positive" << endl;
    else if (n < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}