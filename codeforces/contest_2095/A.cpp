#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int can_form_date(const std::vector<int>& digits) {
    std::string target = "01032025";
    std::vector<bool> used(digits.size(), false);
    
    // Track the index of the last used digit
    int max_index = -1;
    
    // Iterate through each digit in the target date
    for (char target_digit : target) {
        bool found = false;
        
        // Search for the current target digit
        for (int i = 0; i < digits.size(); ++i) {
            // Check if digit matches and hasn't been used
            if (!used[i] && std::to_string(digits[i])[0] == target_digit) {
                used[i] = true;
                max_index = std::max(max_index, i);
                found = true;
                break;
            }
        }
        
        // If we couldn't find the digit, return 0
        if (!found) {
            return 0;
        }
    }
    
    // Return the index where full date is formed (1-based indexing)
    return max_index + 1;
}

int main() {
    // Number of test cases
    int t;
    std::cin >> t;
    
    // Process each test case
    while (t--) {
        // Number of digits
        int n;
        std::cin >> n;
        
        // Read digits
        std::vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> digits[i];
        }
        
        // Print result for this test case
        std::cout << can_form_date(digits) << std::endl;
    }
    
    return 0;
}