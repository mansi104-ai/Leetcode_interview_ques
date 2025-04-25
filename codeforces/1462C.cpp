#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n > 45){
        cout << "-1" <<endl;
        return;
    }

    vector<int> ans;
    for(int i =9;i>=1;--i){
        if(n>=i){
            ans.push_back(i);
            n-=i;
        }
    }
    sort(ans.begin(),ans.end());

    for(auto j :ans){
        cout << j;
    }

    cout <<endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}