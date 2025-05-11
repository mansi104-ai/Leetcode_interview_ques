#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int x = 1;
    while (x < n) {
        int k = 2;
        long long current_sum = 0;
        
        while (current_sum < n) {
            current_sum += x * (1LL << (k - 1));
            
            if (current_sum == n) {
                cout << x << endl;
                return;
            }
            k++;
        }
        x++;
    }
}

int main() {
    solve();
    return 0;
}
