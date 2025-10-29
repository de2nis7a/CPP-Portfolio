//RhombusCalc.cpp

#include <iostream>
#include <cmath>
using namespace std;

//This program calculates the perimeter and area of a rhombus given its diagonals.

int main() {
    float d1, d2; // diagonals of the rhombus
    cout << "Enter the first diagonal: ";
    cin >> d1;
    cout << "Enter the second diagonal: ";
    cin >> d2;

    float side = sqrt((d1*d1)/4 + (d2*d2)/4); // Pythagoras theorem for side of rhombus
    float perimeter = 4 * side;
    float area = (d1 * d2) / 2;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;

    return 0;
}