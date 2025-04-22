#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){

    // int s;
    // char a;
    // cin >> a;
    // s = a- 'A' + 1;
    // cout <<  s ;

    int n;
    string s;
    cin >> n >> s;
    vector<int> inp;

    for(int i =0;i<s.length();i++){
        s[i] = toupper(s[i]);
        inp.push_back(s[i] - 'A' + 1);
    }

    sort(inp.begin(),inp.end());
    // for(auto& x: inp){
    //     cout << x <<endl;
    // }
    // cout << inp.size();
    // sort(inp.begin(),inp.end());
    
    auto last = unique(inp.begin(), inp.end());
    inp.erase(last, inp.end());
    // for(auto& x: inp){
    //     cout << x <<endl;
    // }

    // cout << inp.size();

    // cout << inp.size();
    if(inp.size()!= 26){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}