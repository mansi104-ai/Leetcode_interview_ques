#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string frequencySort(string s) {
    // Step 1: Find the number of occurrences of each alphabet
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    
    // Step 2: Store all alphabets in the hash map along with their occurrences
    vector<pair<char, int>> charFreq;
    for (auto& entry : charCount) {
        charFreq.push_back(entry);
    }
    
    // Step 3: Sort the alphabets based on their occurrences in decreasing order
    sort(charFreq.begin(), charFreq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });
    
    // Step 4: Construct the resulting string
    string result;
    for (auto& entry : charFreq) {
        result += string(entry.second, entry.first);
    }
    
    // Step 5: Return the resulting string
    return result;
}

int main() {
    string s = "afcccaa";
    string sortedString = frequencySort(s);
    cout << sortedString << endl;  // Output: "eert" or "eetr" (either is acceptable)
    return 0;
};
