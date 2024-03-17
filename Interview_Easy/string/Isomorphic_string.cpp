#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
       bool IsIsomorphic(string s , string t){
        int ss = s.length();
        int ts = t.length();
        if (ss != ts){
            return false;
        }
        unordered_map <char,int> smap;
        unordered_map <char,int> tmap;
        for (int i=0; i< ss; i++){
            if (smap.find(s[i]) != smap.end()){
                smap[s[i]] == t[i];
            }
            else if(t[i] != smap[s[i]]){
                return false;
            }
            if(tmap.find(t[i])!= smap.end()){
                tmap[t[i]] == s[i];
            }
            else if(s[i] != tmap[t[i]]){
                return false;
            }
        }
        return true;
       }
};