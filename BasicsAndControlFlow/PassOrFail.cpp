//PassOrFail.cpp

#include <iostream>
using namespace std;

//Determines if a student is failing or passing based on their grade.

int main() {
    int grade;
    cout << "Enter the student's grade: ";
    cin >> grade;

    if (grade < 5)
        cout << "Failing" << endl;
    else 
        cout << "Passing" << endl;

    return 0;
}