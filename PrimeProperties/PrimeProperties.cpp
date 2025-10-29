//PrimeProperties.cpp

#include <cmath>
#include <fstream>

#define VMAX 60        // maximum number of elements in the input sequence
#define PMAX 664618    // maximum number of primes stored
#define CMAX 10000010  // sieve limit for prime checking

int c, n;
long long v[VMAX];     // input numbers
bool sieve[CMAX];      // Eratosthenes sieve
long long vMax;        // maximum value in v
int nrPrimes;
long long primes[PMAX]; // array of primes ≤ sqrt(vMax)
int sol;

// list of prime Fibonacci numbers ≤ 1e6
int task1[] = {2, 3, 5, 13, 89, 233, 1597, 28657, 514229};

// function to count digits of a number
int nrDigits(long long x) {
    if (!x) return 1;
    int ret = 0;
    while (x) { x /= 10; ret++; }
    return ret;
}

// Eratosthenes sieve up to sqrt(vMax)

void erat() {
    if (c == 2) // for task 2, limit sieve to sqrt(vMax)
        vMax = sqrt(vMax);

    sieve[0] = sieve[1] = true;
    for (int i = 2; i * i <= vMax; i++)
        if (!sieve[i])
            for (int j = i * i; j <= vMax; j += i)
                sieve[j] = true;

    primes[++nrPrimes] = 2;
    for (long long i = 3; i <= vMax; i += 2)
        if (!sieve[i])
            primes[++nrPrimes] = i;
}

// Task 1: count numbers in the sequence that are prime Fibonacci numbers

void solve1() {
    for (int i = 1; i <= n; i++) {
        bool ok = false;
        for (int j = 0; j < 9; j++)
            if (v[i] == task1[j]) { ok = true; break; }
        if (ok) sol++;
    }
}

// Task 2: count numbers that are "economic"

void solve2() {
    for (int i = 1; i <= n; i++) {
        int desc = 0;
        long long cpy = v[i];

        for (int j = 1; v[i] > 1 && j <= nrPrimes; j++) {
            int exp = 0;
            while (v[i] % primes[j] == 0) {
                v[i] /= primes[j];
                exp++;
            }
            if (exp == 1)
                desc += nrDigits(primes[j]);
            else if (exp > 1)
                desc += nrDigits(primes[j]) + nrDigits(exp);
        }

        // if v[i] remains prime and was originally composite
        
        if (v[i] > 1 && v[i] != cpy) 
            desc += nrDigits(v[i]);

        // count if the prime decomposition has fewer digits than original
        
        if (v[i] != cpy && desc < nrDigits(cpy))
            sol++;
    }
}

// Task 3: count numbers that CANNOT be written as sum of two primes

void solve3() {
    for (int i = 1; i <= n; i++) {
        bool ok = false;
        for (int j = 1; primes[j] <= v[i] && j <= nrPrimes; j++)
            if (!sieve[v[i] - primes[j]]) { ok = true; break; }
        if (!ok) sol++;
    }
}

// read input from file

void scan() {
    freopen("prime1.in", "r", stdin);
    scanf("%d\n%d\n", &c, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld\n", &v[i]);
        if (v[i] > vMax)
            vMax = v[i];
    }
}

// write output to file

void print() {
    freopen("prime1.out", "w", stdout);
    printf("%d\n", sol);
    fclose(stdout);
}

int main() {
    scan();
    switch (c) {
    case 1: solve1(); break;
    case 2: erat(); solve2(); break;
    case 3: erat(); solve3(); break;
    }
    print();
    return 0;
}
