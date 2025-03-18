#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Create a vector to store n pairs
    vector<vector<int>> arr(n, vector<int>(2));
    
    // Step 1: Input n pairs of i and j
    for (int a = 0; a < n; a++) {
        cin >> arr[a][0] >> arr[a][1];
    }
    
    // Step 2: Check the number of matching elements
    int cnt = 0;
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            if (a != b && arr[a][0] == arr[b][1]) {
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}