// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(){
//     int t, k,n;
//     string s;
//     string res;
//     std::cin >> t;

//     for(int i =0;i<t;i++){
//         std::cin >> n>>k;
//         std::cin >> s;
//         // string res;
//        string reverse_string = string(s.rbegin(),s.rend());
//        if(s == reverse_string){
//         res = "NO";
//     }
//     // int act_val , rev_val;
//     // act_val = s[i] - 'A' + 97;
//     // rev_val = reverse_string[i] - 'A' + 97;

//     if(k == 0){
//         if(s < reverse_string){
//             res = "YES";
//         }else{
//             res = "NO";
//         }
//     }
//     else{
//         res = "YES";
//     }
//     std::cout << res <<std::endl;

//     }
//     return 0;

// }

#include <iostream>
#include <string>
#include <algorithm> // Add to use the reverse function
using namespace std;

int t,n,k;
string s;

bool check(){
    for(int i =1;i<n;i++){
        if(s[i]!= s[0]){
            return false;
        }
        
    }
    return true;
}

bool findAns(){
    // int res = 0;
    if(check()){
        return false;
    }
    string t = s;
    reverse(t.begin(),t.end());

    if(s<t){
        return true;
    }
    return k>=1;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    for(int i = 0;i<t;i++){
        cin >> n >> k >>s;
        cout << (findAns()? "YES" :"NO")<< endl;
    }
    return 0;
}