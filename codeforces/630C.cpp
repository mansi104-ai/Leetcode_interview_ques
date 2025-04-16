#include <iostream>
using namespace std;

// Recursive function to calculate sum of powers of 2 from 2^0 to 2^n
long long sumOfPowers(int n) {
    // Base case
    if (n == 0) {
        return 0; // 2^0 = 1
    }
    
    // Recursive case: 2^n + sum of powers from 2^0 to 2^(n-1)
    return (1LL << n) + sumOfPowers(n - 1);
}

int main() {
    int n;
    cin >> n;
    
    long long result = sumOfPowers(n);
    cout << result;
    
    return 0;
}