#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> inp;

    // Extract digits, ignore '+'
    for (char c : s) {
        if (c != '+') {
            inp.push_back(c);
        }
    }

    // Sort the digits
    sort(inp.begin(), inp.end());

    // Output the result with '+'
    for (int i = 0; i < inp.size(); ++i) {
        cout << inp[i];
        if (i != inp.size() - 1) {
            cout << '+';
        }
    }

    return 0;
}
