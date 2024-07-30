#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> sol(int n) {
        vector<int> res;
        for (int i = 1; i < n+1; i++) {
            res.push_back(i);
        }
        return res;
    }

    string res(vector<int>& res) {
        string result;
        for (int i = res.size() - 1; i >= 0; --i) {
            int num = res[i];
            while (num > 0) {
                result.push_back((num % 10) + '0');
                num /= 10;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    int n = 11;

    vector<int> resu = s.sol(n);
    string seen = s.res(resu);

    for (int i = 0; i < seen.length(); i++) {
        cout << seen[i] << endl;
    }

    return 0;
}
