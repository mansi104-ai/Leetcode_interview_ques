#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        if (2 * k >= n) {
            cout << "NO" << endl;
            continue;
        }

        bool ok = true;
        for (int i = 0; i < k; ++i) {
            if (s[i] != s[n - 1 - i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
