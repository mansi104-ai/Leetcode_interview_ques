#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> all_div(int a) {
    vector<int> outp;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            outp.push_back(i);
        }
    }
    return outp;
}

int main() {
    int t;
    cin >> t;
    string s;
    cin >> s;

    vector<int> outp = all_div(t);
    sort(outp.begin(), outp.end());

    for (int i = 0; i < outp.size(); i++) {
        reverse(s.begin(), s.begin() + outp[i]);
    }

    cout << s << endl;
    return 0;
}
