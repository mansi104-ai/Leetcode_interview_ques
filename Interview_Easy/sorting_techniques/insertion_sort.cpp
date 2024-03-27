#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void swapElements(vector<int>& arr, int n) {
        for (int i = 1; i < n; ++i) {
            int j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                j--;
            }
        }
    }
};

int main() {
    vector<int> arr = {13, 2, 3, 4, 565};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    Solution s;
    s.swapElements(arr, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
