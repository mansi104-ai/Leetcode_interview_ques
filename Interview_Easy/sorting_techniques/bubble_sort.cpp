#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void swapElements(vector<int>& arr, int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 3, 55, 23, 12, 24};
    int n = arr.size();
    
    Solution s;
    s.swapElements(arr, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
