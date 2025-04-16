#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long a, b, c;
        bool found = false;
        cin >> a >> b >> c;

        for (int i = 0; i <= 3; ++i) {
            for (int j = 0; j <= 3; ++j) {
                for (int k = 0; k <= 3; ++k) {
                    if (i + j + k > 3) continue;

                    long long partsA = i + 1;
                    long long partsB = j + 1;
                    long long partsC = k + 1;

                    if (a % partsA == 0 && b % partsB == 0 && c % partsC == 0) {
                        long long valA = a / partsA;
                        long long valB = b / partsB;
                        long long valC = c / partsC;

                        if (valA == valB && valB == valC) {
                            found = true;
                            break;
                        }
                    }
                }
                if (found) break;
            }
            if (found) break;
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}
