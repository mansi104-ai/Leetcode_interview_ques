#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> sol(int n) {
        vector<int> res;
        for (int i = 1; i < n; i++) {
            res.push_back(i);
        }
        return res;
    }

    string res(vector<int>& res) {
        string result;
        for (int i = res.size() - 1; i >= 0; --i) {
            result += to_string(res[i]);
        }
        return result;
    }
};

int main() {
    Solution s;
    int n = 11;

    vector<int> resu = s.sol(n);
    string seen = s.res(resu);

    // Since `seen` may not be of length `n`, ensure safe access
    if (n < seen.size()) {
        cout << seen[n] << endl;
    } else {
        cout << "Index out of bounds" << endl;
    }

    return 0;
}
