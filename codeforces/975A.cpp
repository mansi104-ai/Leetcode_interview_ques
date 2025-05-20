#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> result;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());

        result.insert(s);
    }

    cout << result.size() << endl;
    return 0;
}
