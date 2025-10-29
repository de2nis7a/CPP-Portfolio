//HeadsAndLegs.cpp

#include <iostream>
using namespace std;

//Reads the number of chickens (G) and sheeps (O), then calculates the total number of heads and legs.

int main() {
    int G, O;
    cin >> G >> O;

    int heads = G + O;
    int legs = G * 2 + O * 4;

    cout << heads << " " << legs;
    return 0;
}