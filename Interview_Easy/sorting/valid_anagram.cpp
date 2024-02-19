class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false; // If the lengths of the strings are different, they can't be anagrams
        }

        // Count the occurrences of each character in both strings
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }
        for (char c : t) {
            charCount[c]--;
        }

        // Check if all character counts are zero
        for (const auto& pair : charCount) {
            if (pair.second != 0) {
                return false; // If any character count is non-zero, strings are not anagrams
            }
        }

        return true; // If all character counts are zero, strings are anagrams
    }
};