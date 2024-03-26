//First code

class Solution {
public:
    int romanToInt(string s) {
        int n =s.length();
        unordered_map<char,int>rmn;
        rmn.insert({'I',1});
        rmn.insert({'V',5});
        rmn.insert({'X',10});
        rmn.insert({'L',50});
        rmn.insert({'C',100});
        rmn.insert({'D',500});
        rmn.insert({'M',1000});
        int curr_sum =0;
        for(int i=n;i<s.length();i--){
            if(rmn[i].second <rmn[i-1].second){
                curr_sum -= s[i];
                i++;
            }
            else{
                curr_sum+= s[i];
                i++;
            }
            return curr_sum;
        }

    }
};

//Improved code:

#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        unordered_map<char,int> rmn;
        rmn['I'] = 1;
        rmn['V'] = 5;
        rmn['X'] = 10;
        rmn['L'] = 50;
        rmn['C'] = 100;
        rmn['D'] = 500;
        rmn['M'] = 1000;
        int curr_sum = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            if (i < n - 1 && rmn[s[i]] < rmn[s[i+1]]) {
                curr_sum -= rmn[s[i]];
            } else {
                curr_sum += rmn[s[i]];
            }
        }
        
        return curr_sum;
    }
};

