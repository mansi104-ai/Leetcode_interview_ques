#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort the skill levels in descending order
    sort(a.rbegin(), a.rend());
    
    int teams = 0, members = 0;
    for (int i = 0; i < n; i++) {
        members++;
        if (members * a[i] >= x) {
            teams++;
            members = 0;  // Start forming a new team
        }
    }
    cout << teams << "\n";
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
