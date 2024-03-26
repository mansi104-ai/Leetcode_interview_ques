#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void swapElements(vector<int>& alpha, int n) {
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (alpha[j] < alpha[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(alpha[i], alpha[minIndex]);
            }
        }
    }
};

int main() {
    vector<int> alpha = {13, 26, 45, 2, 34};
    int n = alpha.size();
    
    Solution s;
    s.swapElements(alpha, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << alpha[i] << " ";
    }
    cout << endl;

    return 0;
};
