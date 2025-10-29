//TotalAnimals.cpp

#include <iostream>
using namespace std;

//Calculates the total number of animals in a yard
// given the number of dogs, with cats = 2*dogs and chickens = 2*cats.

int main() {
    unsigned int dogs, cats, chickens;
    cout << "Enter the number of dogs: ";
    cin >> dogs;

    cats = 2 * dogs;
    chickens = 2 * cats;

    unsigned int total = dogs + cats + chickens;
    cout << "Total animals in the yard: " << total << endl;

    return 0;
}