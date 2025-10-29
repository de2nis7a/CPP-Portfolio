//CircleAreaPerimeter.cpp

#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

// Calculates the area and perimeter of a circle given its radius.

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    const double PI = 3.14159265359;
    double area = PI * radius * radius;
    double perimeter = 2 * PI * radius;

    cout << fixed << setprecision(6);
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;

    return 0;
}