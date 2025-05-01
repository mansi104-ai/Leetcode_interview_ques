#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >>s >>t;
    bool ispossible = true;
    vector<int> inp(s.length());

    if(s.length() != t.length()){
        cout << "No"<<endl;
        return 0;
    }

    for(int i =0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
       {
            inp[i] = 1;
        }else{
            inp[i] = 0;
        }
    }
    for(int i =0;i<s.length();i++){
        if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
       {
            inp[i] = inp[i] ^ 1;
        }else{
            inp[i] = inp[i] ^ 0;
        }
    }


    for(int i =0;i<inp.size();i++){
        if(inp[i]==1){
            ispossible = false;
        }
    }

    if(ispossible == false){
        cout  << "No" <<endl;
    }else{
        cout << "Yes" <<endl;
    }
    return 0;

}