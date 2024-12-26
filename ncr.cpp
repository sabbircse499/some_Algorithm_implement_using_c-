/*#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r);
int memo[101][101];  // Increased array size to 101

int main() {
    memset(memo, -1, sizeof(memo));  // Initialize memoization table to -1

    int n, r;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "Enter the value of r:" << endl;
    cin >> r;
    cout << "nCr value is: " << nCr(n, r) << endl;  // Call the function and print the result
    return 0;
}

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else if (memo[n][r] != -1) {
        return memo[n][r];
    } else {
        memo[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
        return memo[n][r];
    }
}*/

#include <iostream>

using namespace std;

int nCr(int n, int r);
int memo[101][101];  // Increased array size to 101

int main() {
    // Initialize memoization table to -1
    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            memo[i][j] = -1;
        }
    }

    int n, r;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "Enter the value of r:" << endl;
    cin >> r;
    cout << "nCr value is: " << nCr(n, r) << endl;  // Call the function and print the result
    return 0;
}

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else if (memo[n][r] != -1) {
        return memo[n][r];
    } else {
        memo[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
        return memo[n][r];
    }
}

