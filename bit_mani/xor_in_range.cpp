#include <iostream>
#include <algorithm>
using namespace std;

// XOR from 3 -> 5 : 3= 11 , 4 = 100, 5 = 101 -> 11 ^ 100 ^ 101 = 10 = 2 
// XOR from 4 -> 10 : 4 = 100 , 5 = 101 , 6 = 110 , 7 = 111 , 8 = 

int xor1toN(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << (xor1toN(y) ^ xor1toN(x - 1)) << endl;
}
