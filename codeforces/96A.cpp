#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    int max_val = 1, curr_val = 1;
    for(int i =0 ;i<s.length();i++){
        if(s[i] == s[i+1]){
            curr_val++;
            max_val = max(curr_val,max_val);
            // cout <<max_val<<endl;
        }else{
            curr_val = 1;
        }
    }
    if(max_val > 6){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}