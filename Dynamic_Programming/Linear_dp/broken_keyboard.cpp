#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    bool typeable[26] = {0};
    for (ll i = 0; i < k; i++) {
        char c;
        cin >> c;
        typeable[c - 'a'] = 1;
    }

    ll ans = 0;
    ll len = 0; // current segment length of typeable chars

    for (ll i = 0; i < n; i++) {
        if (typeable[s[i] - 'a']) {
            len++;
        } else {
            ans += len * (len + 1) / 2;
            len = 0;
        }
    }
    ans += len * (len + 1) / 2; // last segment

    cout << ans << "\n";
    return 0;
}
