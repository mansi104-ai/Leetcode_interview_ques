#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    cin  >> n;
    string s;
    cin >> s;
    string rev = s;
    sort(rev.begin(),rev.end());
    if(rev == s){
        cout << "NO" <<endl;
        return 0;
    }

    // for(int l =0;l < n;++l){
    //     string res=s;
    //     for(int r =l; r < n-1;++r){
    //         if(res < s){
    //             cout << "YES" <<endl;
    //             cout << l+1<< " " << r+1 << endl;
    //         };
    //         if(s[l] > s[l+1]){
    //             reverse(res.begin() + l,res.begin() + r-l+1);
    //         }

    //     }
    // }

    for(long long  i =0;i<n-1;i++){
        if(s[i] > s[i+1]){
            reverse(s.begin() + i,s.begin() + i+1);
            cout << "YES"<<endl;
            cout << i+1 << " " <<i+2<<endl;
            return 0;
        }
       
    }
    
    return 0;
    }