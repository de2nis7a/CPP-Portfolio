//PalindromeCheck.cpp

#include <bits/stdc++.h>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

// Program to check if a given word is a palindrome

int main() {
    int n;
    fin >> n;
    for(int i = 0; i < n; ++i) {
        char ch[101];
        fin >> ch;
        
        int m = 0;
        while(ch[m] != '\0')
            m++;    
        m--; // index of last character

        int j = 0;
        bool isPalindrome = true;

        while(ch[j] != '\0') {
            if(ch[j] != ch[m - j])
                isPalindrome = false;
            j++;
        }

        fout << (isPalindrome ? 1 : 0) << endl;
    }
    return 0;    
}
