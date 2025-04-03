#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// USING BUILTIN FUNCTION

// int main(){
//     string s, t;
//     cin  >> s >> t;
//     reverse(t.begin(),t.end());

//     if(t == s){
//         std::cout <<"YES"<<std::endl;
//     }else{
//         std::cout << "NO"<< endl;
//     }
//     return 0;

// }

// USING REVERSAL FUNCTION
string revst(string s) {
    string reversed = "";
    int n = s.length();
    for(int i = n-1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

int main() {
    string s, t;
    cin >> s >> t;
    
    string reversed_s = revst(s);
    
    if(reversed_s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}