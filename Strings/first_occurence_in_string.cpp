#include <iostream>
#include <string>
#include <vector>
using namespace std;


//Brute force approach to solve the problem
class Solution {
public:
    vector<int> strStr(string haystack, string needle) {
        vector<int> result;
        int n = haystack.size();
        int m = needle.size();

        if (m == 0) return {0}; // empty needle
        if (m > n) return {};   // needle longer than haystack

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) { // full needle matched
                result.push_back(i);
            }
        }
        return result;
    }
};


int main(){
  string haystack = "abc";
  string needle = "c";
  Solution s;
  for(auto& it: s.strStr(haystack,needle)){
    cout << it << " ";
  }
  return 0;
}