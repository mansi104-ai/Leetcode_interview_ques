#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <set>
#include <queue>
#include <hash_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        set<int> available;
        for (int i = 1; i <= n; ++i) {
            available.insert(i);
        }
        deque<int> result;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == '<') {
                int mn = *available.begin();
                result.push_front(mn);
                available.erase(mn);
            } else {
                int mx = *available.rbegin();
                result.push_front(mx);
                available.erase(mx);
            }
        }
        result.push_front(*available.begin());
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}