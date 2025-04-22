#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    string outp;
    // outp.insert('.',0);
    for(auto& x : s){
        x = tolower(x);
    }
    
    for(int i =0;i<s.length();i++){
        string tmp = s;
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            tmp.erase(i,1);
            continue;
        }

        outp.push_back('.');
        outp.push_back(tmp[i]); 
    }

    cout << outp;
    return 0;

}