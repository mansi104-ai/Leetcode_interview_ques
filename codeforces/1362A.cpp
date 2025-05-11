#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        // Make sure a > b
        if (a < b) swap(a, b);

        // Check if divisible
        if (a % b != 0) {
            cout << -1 << endl;
            continue;
        }

        int ops = 0;
        long long ratio = a / b;

        // Reduce the ratio by dividing with 8, 4, and 2
        while (ratio % 8 == 0) {
            ratio /= 8;
            ops++;
        }
        while (ratio % 4 == 0) {
            ratio /= 4;
            ops++;
        }
        while (ratio % 2 == 0) {
            ratio /= 2;
            ops++;
        }

        if (ratio != 1) {
            cout << -1 << endl;
        } else {
            cout << ops << endl;
        }
    }
    return 0;
}
