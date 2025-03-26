#include <iostream>
#include <vector>
#include <unordered_set> 
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> operations;
    int mid = n / 2, r = n;

    // Check for 0 in the right half
    if (std::find(a.begin() + mid, a.end(), 0) != a.end()) {
        operations.push_back({mid + 1, n}); // 1-based index
        r -= (n - mid - 1);
    }

    // Check for 0 in the left half
    if (std::find(a.begin(), a.begin() + mid, 0) != a.end()) {
        operations.push_back({1, mid});
        r -= (mid - 1);
    }

    // Final operation
    operations.push_back({1, r});

    // Output results
    cout << operations.size() << "\n";
    for (auto [l, r] : operations) {
        cout << l << " " << r << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
