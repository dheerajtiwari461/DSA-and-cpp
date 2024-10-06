#include <bits/stdc++.h>
using namespace std;

/**
 * This function takes a single long long argument n and returns a long long
 * result. If n is even, the function returns n divided by 2. If n is odd,
 * the function returns -(n divided by 2 plus 1).
 */
long long f(long long n) {
    if (n % 2 == 0) {
        // If n is even, return n divided by 2
        return n / 2;
    } else {
        // If n is odd, return -(n divided by 2 plus 1)
        return -(n / 2 + 1);
    }
}

/**
 * This is the main entry point for the program. It reads a single long long
 * value from standard input, calls the f function with that value, and prints
 * the result to standard output.
 */
int main() {
    long long t;
    cin >> t;
    cout << f(t) << endl;
    return 0;
}


