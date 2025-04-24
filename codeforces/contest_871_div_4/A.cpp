#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <set>
#include <hash_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    string inp = "codeforces";
    for(int i = 0;i<n;i++){
        cin >> s;
        for(int j =0 ;j<inp.length();j++){
            if(s[j]!= inp[j]){
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    cout << endl;
    return 0;
}