//ChristmasOrnaments.cpp

#include <iostream>
using namespace std;

//Calculates the total number of Christmas balls given the number of white balls.

int main() {
    int white, red, green;
    cout << "Enter the number of white balls: ";
    cin >> white;

    red = 2 * white;       
    green = red - 3;       

    int total = white + red + green;
    cout << "Total number of balls: " << total << endl;

    return 0;
}
