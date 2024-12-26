#include <iostream>
using namespace std;

int fibo(int n, int memo[]) {
    if (n <= 0) {
        cout << "Input should be higher than 0" << endl;
        return 0;
    }

    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
    return memo[n];
}

int main() {
    const int n = 8;
    int memo[n + 1];

    for (int i = 0; i <= n; ++i) {
        memo[i] = -1;
    }

    cout << "Fibonacci Series up to index " << n << ":\n";

    for (int i = 1; i <= n; ++i) {
        int result = fibo(i, memo);
        cout << result << " ";
    }

    cout << endl;

    return 0;
}
