#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<int> results;
    
    while (t--) {
        int n;
        cin >> n;
        
        int min_skill1 = INT_MAX;  // Minimum time for skill 1
        int min_skill2 = INT_MAX;  // Minimum time for skill 2
        int min_both = INT_MAX;    // Minimum time for both skills
        
        for (int i = 0; i < n; i++) {
            int time;
            string skills;
            cin >> time >> skills;
            
            // Check what skills this book provides
            if (skills == "11") {
                // Book gives both skills
                min_both = min(min_both, time);
            } else if (skills == "10") {
                // Book gives only skill 1
                min_skill1 = min(min_skill1, time);
            } else if (skills == "01") {
                // Book gives only skill 2
                min_skill2 = min(min_skill2, time);
            }
        }
        
        int result;
        if (min_both != INT_MAX) {
            // Option 1: Take a book with both skills
            result = min_both;
            
            // Option 2: Take one book for skill 1 and one for skill 2
            if (min_skill1 != INT_MAX && min_skill2 != INT_MAX) {
                result = min(result, min_skill1 + min_skill2);
            }
        } else if (min_skill1 != INT_MAX && min_skill2 != INT_MAX) {
            // We can only use separate books
            result = min_skill1 + min_skill2;
        } else {
            // Impossible to get both skills
            result = -1;
        }
        
        results.push_back(result);
    }
    
    // Output results
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}