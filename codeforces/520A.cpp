#include <iostream>
#include <vector>
#include <algorithm>
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
        inp.push_back(s[i] - 'A' + 1);
    }
    sort(inp.begin(),inp.end());

    for(int i = 1;i<=26;i++){
        if(inp[i] == inp[i-1]){
            continue;
        }
        if(inp[i] < i){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}