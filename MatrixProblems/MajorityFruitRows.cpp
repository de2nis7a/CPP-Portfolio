//MajorityFruitRows.cpp

// This program reads a plantation of fruit trees and determines:
// 1. The number of rows with a majority variety of tree.
// 2. The longest sequence of identical trees in consecutive positions on any row.

#include <fstream>
using namespace std;

ifstream fin("livada.in");
ofstream fout("livada.out");

const int MAX_N = 700000;
const int MAX_DIF = 250000;
const int INF = 1000000000;

int m, n, p, x[5 + MAX_N], ap[5 + MAX_DIF];

int main() {
    fin >> m >> n >> p;
    int majorityRows = 0, maxConsecutive = 0;

    for (int h = 1; h <= m; h++) {
        int minValue = INF, consecutiveCount = 1;
        x[0] = -1;

        // Reading the row and calculating consecutive sequence length
       
        for (int i = 1; i <= n; i++) {
            fin >> x[i];
            if (x[i] == x[i - 1]) {
                consecutiveCount++;
                if (maxConsecutive < consecutiveCount) 
                    maxConsecutive = consecutiveCount;
            } else {
                consecutiveCount = 1;
            }

            if (x[i] < minValue) 
                minValue = x[i];
        }

        // Reset frequency array
       
        for (int i = 0; i <= MAX_DIF; i++)
            ap[i] = 0;

        // Check for majority variety in the row
     
        bool hasMajority = false;
        for (int i = 1; i <= n; i++) {
            ap[x[i] - minValue]++;
            if (ap[x[i] - minValue] >= n / 2 + 1) {
                hasMajority = true;
                break;
            }
        }

        if (hasMajority) 
            majorityRows++;
    }

    fout << majorityRows << '\n' << maxConsecutive << '\n';
    fin.close();
    fout.close();
    return 0;
}
