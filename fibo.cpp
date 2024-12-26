#include <iostream>

using namespace std;

// Function to calculate Fibonacci numbers using dynamic programming
int fibonacci(int n) {
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return -1; // Error code to indicate invalid input
    }

    int fibArray[n + 1];

    // Base cases
    fibArray[0] = 0;
    fibArray[1] = 1;

    // Calculate Fibonacci numbers using dynamic programming
    for (int i = 2; i <= n; ++i) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    return fibArray[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacci(n);

    if (result != -1) {
        cout << "Fibonacci(" << n << ") = " << result << endl;
    }

    return 0;
}
