//MaxSubsequenceSum.cpp

#include <bits/stdc++.h>

using namespace std;

// Input and output files

ifstream f("secvsummax.in");
ofstream g("secvsummax.out");

int main(){

    int n;           // number of elements in the sequence
    int st, dr;       // start and end indices of the maximum sum subsequence
    int smax = -2000000000; // maximum sum found so far, initialized very low
    int s = -1;      // current sum of the subsequence
    int start;       // temporary start index for the current subsequence
    int x;           // current element from the sequence

    f >> n;
    for(int i = 1; i <= n; i++)
    {
        f >> x;

        // If the current sum is negative, start a new subsequence

        if(s < 0)
        {
            s = 0;
            start = i;
        }

        s += x;

        // Update maximum sum and indices if current sum is higher

        if(s > smax)
        {
            smax = s;
            st = start;
            dr = i;
        }
    }

    // Output the start and end indices of the subsequence with max sum

    g << st << " " << dr;
}
