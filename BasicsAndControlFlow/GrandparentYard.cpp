//GrandparentYard.cpp

#include <iostream>
using namespace std;

//This program calculates the area and perimeter of a rectangular yard, given its dimensions.

int main() {
    int length, width;
    cout << "Enter the length of the yard: ";
    cin >> length;
    cout << "Enter the width of the yard: ";
    cin >> width;

    int area = length * width;
    int perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}