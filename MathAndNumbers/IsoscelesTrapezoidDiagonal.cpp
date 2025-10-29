//IsoscelesTrapezoidDiagonal.cpp

#include <iostream>
#include <cmath>
using namespace std;

// Calculates the length of the diagonal of an isosceles trapezoid given its sides.

int main() {
    double B, b, l; // B = larger base, b = smaller base, l = side length
    cout << "Enter the larger base B: ";
    cin >> B;
    cout << "Enter the smaller base b: ";
    cin >> b;
    cout << "Enter the side length l: ";
    cin >> l;

    double x = (B - b) / 2.0;       // horizontal offset of side relative to smaller base
    double h = sqrt(l*l - x*x);     // height using Pythagoras theorem
    double d = sqrt((b + x)*(b + x) + h*h); // diagonal using Pythagoras

    cout << "Diagonal length: " << d << endl;

    return 0;
}