// ReplaceOddWithPrevEven.cpp

#include <iostream>
using namespace std;

// Function to replace each odd digit of a natural number with the largest even digit smaller than it
// Parameter:
// - n (passed by reference): the natural number to transform
// The function updates n directly with the modified number

void replaceOddWithPrevEven(int &n) {
    int result = 0, place = 1, temp = n;
    n = 0;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit % 2 == 1) digit -= 1; // replace odd digit with previous even
        n = digit * place + n;
        place *= 10;
        temp /= 10;
    }
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    replaceOddWithPrevEven(num);
    cout << "Number after replacing odd digits: " << num << endl;
    return 0;
}
