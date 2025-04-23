#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    string s;

    cin >> n >> t;
    cin >> s;

    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++; // Skip the next index as the 'G' moved left
            }
        }
    }

    cout << s;
    return 0;
}

