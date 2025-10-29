//RectangleProperties.cpp

#include <iostream>
using namespace std;

//Calculates the perimeter, area, and square of the diagonal of a rectangle given its sides.

int main() {
    int a, b; // sides of the rectangle
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;

    int perimeter = 2 * (a + b);
    int area = a * b;
    int diagonalSquared = a*a + b*b; // Pythagoras theorem

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Square of diagonal: " << diagonalSquared << endl;

    return 0;
}