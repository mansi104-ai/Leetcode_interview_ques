#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <set>
#include <hash_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        vector<pair<int, int>> operations;
        
        // Step 1: Ensure a[i] < b[i] for all i
        for (int i = 0; i < n; i++) {
            if (a[i] >= b[i]) {
                // Swap a[i] and b[i]
                swap(a[i], b[i]);
                operations.push_back({3, i + 1}); // 1-indexed
            }
        }
        
        // Step 2: Sort array a using bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    operations.push_back({1, j + 1}); // 1-indexed
                }
            }
        }
        
        // Step 3: Sort array b using bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (b[j] > b[j + 1]) {
                    swap(b[j], b[j + 1]);
                    operations.push_back({2, j + 1}); // 1-indexed
                }
            }
        }
        
        // Output the operations
        cout << operations.size() << "\n";
        for (auto op : operations) {
            cout << op.first << " " << op.second << "\n";
        }
    }
    
    return 0;
}