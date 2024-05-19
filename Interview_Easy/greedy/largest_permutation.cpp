#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> LargestPermutation(vector<int> &A, int B) {
        int size = A.size();
        unordered_map<int, int> position;
        
        // Record the initial positions of elements
        for (int i = 0; i < size; ++i) {
            position[A[i]] = i;
        }
        
        for (int i = 0; i < size && B > 0; ++i) {
            // The value that should be at the current position for the largest permutation
            int correct_value = size - i;
            
            // If the correct value is already at the current position, continue
            if (A[i] == correct_value) {
                continue;
            }
            
            // Otherwise, find the position of the correct value
            int correct_pos = position[correct_value];
            
            // Swap the elements
            swap(A[i], A[correct_pos]);
            
            // Update the positions in the hash map
            position[A[correct_pos]] = correct_pos;
            position[A[i]] = i;
            
            // Decrease the number of allowed swaps
            --B;
        }
        
        return A;
    }
};

int main() {
    Solution solution;
    vector<int> A = {4, 2, 3, 5, 1};
    int B = 5;
    
    vector<int> result = solution.LargestPermutation(A, B);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}

