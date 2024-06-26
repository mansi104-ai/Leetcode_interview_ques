#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
     int findContentChildren(vector<int>& g, vector<int>& s){
        int i=0;
        int j=0;
        int contentChildren = 0;

        while(i<g.size() && j < s.size()){
            if(g[i]<= s[j]){
                contentChildren++;
                i++;
            }
            j++;
        }

        return contentChildren;

     }
};

int main(){
    Solution m;

    vector<int> g = {2,4,5};
    vector<int> s = {1,2,3,4,5};
    m.findContentChildren(g,s);

    
}