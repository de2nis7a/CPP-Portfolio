//SumFromFile.cpp

#include <fstream>
using namespace std;

// This program reads two integers from a file "sum.in", 
// calculates their sum, and writes the result to "sum.out".

int main() {
    ifstream f("sum.in");
    ofstream g("sum.out");

    int number, sum = 0;
    for (int i = 1; i <= 2; i++) {
        f >> number;
        sum += number;
    }

    g << sum;

    f.close();
    g.close();
    return 0;
}
