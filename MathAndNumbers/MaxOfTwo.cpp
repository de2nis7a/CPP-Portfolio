//MaxOfTwo.cpp

#include <iostream>
using namespace std;

//Determines the maximum of two integers entered by the user.

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Maximum: " << a << endl;
    else
        cout << "Maximum: " << b << endl;

    return 0;
}