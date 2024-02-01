class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;  // Use a stack of chars for brackets
        unordered_map<char, char> bracketPairs = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char c : s) {
            if (bracketPairs.count(c)) {  // If it's a closing bracket
                if (stack.empty() || stack.top() != bracketPairs[c]) {
                    return false;  // Unmatched closing bracket
                }
                stack.pop();  // Pop the matching opening bracket
            } else {  // If it's an opening bracket
                stack.push(c);
            }
        }

        return stack.empty();  // All opening brackets should be closed
    }
};
