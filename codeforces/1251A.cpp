#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        // vector<char> inp;
        cin >> s;
        string res;
        if(s.length() == 1){
            cout << s <<endl;
            continue;

        }


        if(s.length() == 2 ){
            if(s[0] == s[1]){
                cout <<endl;
                continue;

            }else{
                cout << s <<endl;
                continue;
            }
        }
        
        for(int i =0;i<s.length()-1;++i){
            
            while(s[i] == s[i+1]){
                // cout << s[i]<<s[i+1] <<endl;
                auto last = unique(s.begin()+i,s.begin()+i+2);

                s.erase(last,s.end());
            }
        }
        res = s;
        if(res.length() == 0){
            cout << endl;
            continue;
        }
        
        //Sort and remove duplicates
        sort(res.begin(),res.end());

        //Remove duplicates
        auto last = unique(res.begin(),res.end());

        res.erase(last,res.end());

        cout << res <<endl;
        continue;
    }
    return 0;

}