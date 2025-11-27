#include <iostream>
#include <vector>
using namespace std;

long long gcdll(long long a, long long b) {
    return b == 0 ? a : gcdll(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++)
            g = gcdll(g, a[i]);

        long long x = 2;
        while (x <= 1e6) { // check small x first
            if (gcdll(g, x) == 1) {
                cout << x << "\n";
                goto next;
            }
            x++;
        }

        // if no small x works, just output next prime > largest prime factor of g
        cout << g + 1 << "\n"; // since gcd(g, g+1) = 1 always
        next:;
    }
}
