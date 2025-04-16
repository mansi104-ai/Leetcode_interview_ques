#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> ans(4);
    for(int i =0;i<4;i++){
        cin >> ans[i];
    }

    int cnt=0;
    sort(ans.begin(),ans.end());
    for(int j =1;j<=4;j++){
        if(ans[j] == ans[j-1]){
            cnt++;
        }
    }
    cout <<cnt;
    return 0;

}