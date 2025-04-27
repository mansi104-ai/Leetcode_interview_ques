#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> inp(n);
    for(int i=0;i<n;i++){
        cin >> inp[i];
    }

    sort(inp.begin(),inp.end());
    if(n==1){
        cout << 0;
        return 0;
    }
    int cnt =1;
    int maxcnt = 1;
    for(int i =0;i<n;i++){
        if(inp[i] == inp[i+1]){
            cnt++;
            maxcnt = max(maxcnt,cnt);
        }else{
            cnt = 1;
        }
    }
    // cout << maxcnt ;
    cout << n - maxcnt;
    return 0;

}