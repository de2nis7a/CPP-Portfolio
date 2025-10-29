//ImperialInheritance.cpp

// This program reads N bags of gold and distributes them among K sons
// according to the rules: each son gets at least one bag, no son gets
// more gold than an elder brother, and the youngest son should get
// the maximal possible sum without violating the rules.

#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("mostenire.in");
ofstream fout("mostenire.out");

const int NMax = 100000;
const int KMax = 100;

int X[NMax + 5];       // gold in each bag
int Index[KMax + 5];   // sorting index
int Sum[KMax + 5];     // sum of gold per son
int Bags[KMax + 5];    // number of bags per son
int N, K, TotalSum, Sol = -1;

void Read() {
    fin >> N >> K;
    for(int i = 1; i <= N; ++i) {
        fin >> X[i];
        TotalSum += X[i];
    }
}

// check if we can give each son at least 'Value' gold

bool Check(int Value) {
    int Sum = 0, Nr = 0;
    for(int i = 1; i <= N; ++i) {
        Sum += X[i];
        if(Sum >= Value) {
            Nr++;
            Sum = 0;
        }
    }
    return (Nr >= K);
}

void Solve() {
    int Left = 1, Right = TotalSum;
    while(Left <= Right) {
        int Mid = (Left + Right) / 2;
        if(Check(Mid)) {
            Sol = Mid;
            Left = Mid + 1;
        } else {
            Right = Mid - 1;
        }
    }
}

bool Compare(int A, int B) {
    return Sum[A] > Sum[B];
}

void Print() {
    int j = 0;
    fout << Sol << "\n";

    Sum[1] = Bags[1] = 0;
    j = 1;
    for(int i = 1; i <= N; ++i) {
        Sum[j] += X[i];
        Bags[j]++;
        if(Sum[j] >= Sol) {
            Sum[++j] = 0;
            Bags[j] = 0;
        }
    }

    Sum[K] += Sum[K+1]; 
    Bags[K] += Bags[K+1];

    for(int i = 1; i <= K; ++i)
        Index[i] = i;

    sort(Index + 1, Index + K + 1, Compare);

    for(int i = 1; i <= K; ++i)
        Sum[Index[i]] = i;

    for(int i = 1; i <= K; ++i)
        fout << Sum[i] << " " << Bags[i] << "\n";
}

int main() {
    Read();
    Solve();
    Print();
    return 0;
}
