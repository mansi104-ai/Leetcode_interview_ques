#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.length();
    }
};

// The loop continues until either all characters in s are found in t (i.e., i reaches the end of s) or all characters in t are checked (i.e., j reaches the end of t).
// Inside the loop, the current character in s (at index i) is compared with the current character in t (at index j).
// If the characters match, i is incremented to move to the next character in s. This ensures that the characters in s are found in the same order in t.
// Regardless of whether the characters match or not, j is always incremented to move to the next character in t.