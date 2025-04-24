#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> inp(n);
        
        for (int j = 0; j < n; j++) {
            cin >> inp[j];
        }
        
        int cnt = 0;
        int maxcnt = 0;  // Initialize to 0, not INT_MIN since we're looking for length
        
        for (int j = 0; j < n; j++) {
            if (inp[j] == 0) {
                cnt++;
                maxcnt = max(maxcnt, cnt);
            } else {
                cnt = 0;
            }
        }
        
        cout << maxcnt << endl;
    }
    
    return 0;
}