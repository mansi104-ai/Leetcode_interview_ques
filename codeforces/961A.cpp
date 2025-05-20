#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> cnt(n, 0);
    
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cnt[x - 1]++;  
    }
    
    int min_count = cnt[0];
    for (int i = 1; i < n; i++) {
        min_count = min(min_count, cnt[i]);
    }

    cout << min_count << endl;
    return 0;
}
