// OddEvenChars.cpp

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// This program reads multiple strings from a file. 
// For each string, it outputs two strings: 
//   - characters at odd indices (1-based indexing) 
//   - characters at even indices (1-based indexing) 
// The two resulting strings are separated by a single space on each line.

int main()
{
    ifstream in("paritatesiruri.in");
    ofstream out("paritatesiruri.out");

    int k;
    in >> k;

    for (int j = 0; j < k; j++)
    {
        char a[1000];
        in >> a;
        int len = strlen(a);

        // Print characters at odd positions (1-based indexing)

        for (int i = 0; i < len; i++)
            if (i % 2 == 0) // 0-based index -> i=0 is position 1 (odd)
                out << a[i];

        out << " ";

        // Print characters at even positions (1-based indexing)
        
        for (int i = 0; i < len; i++)
            if (i % 2 != 0) // 0-based index -> i=1 is position 2 (even)
                out << a[i];

        out << endl;
    }

    return 0;
}
