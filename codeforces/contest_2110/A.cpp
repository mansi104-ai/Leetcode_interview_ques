#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <set>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> inp(n);
        for (int i = 0; i < n; i++) {
            cin >> inp[i];
        }

        if ((inp[0] + inp[n - 1]) % 2 == 0) {
            cout << 0 << endl;
            continue; 
        }

        int l = 0;
        int r = n - 1;
        int no_l = 0;
        int no_r = 0;

        if ((inp[n - 1] % 2 == 0) && inp[0] % 2 != 0) {
            while (l < n && inp[l] % 2 != 0) {
                no_l++;
                l++;
            }
            while (r >= 0 && inp[r] % 2 == 0) {
                no_r++;
                r--;
            }
        } else {
            while (l < n && inp[l] % 2 == 0) {
                no_l++;
                l++;
            }
            while (r >= 0 && inp[r] % 2 != 0) {
                no_r++;
                r--;
            }
        }

        cout << min(no_l, no_r) << endl;
    }

    return 0;
}
