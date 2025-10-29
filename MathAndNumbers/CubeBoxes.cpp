//CubeBoxes.cpp

#include <iostream>
using namespace std;

//Determines how many cubic boxes of side 'l' 
// can be stacked in a room of height 'h'.

int main() {
    int l, h;
    cout << "Enter the side length of the cube and the height of the room: ";
    cin >> l >> h;

    int boxes = h / l;
    cout << "Number of cubes that can be stacked: " << boxes << endl;

    return 0;
}