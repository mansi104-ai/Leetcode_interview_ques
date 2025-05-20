#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> inp(n);
    for(int i =0;i<n;i++){
        cin >> inp[i];
    }

    sort(inp.begin(),inp.end());
    auto it = unique(inp.begin(), inp.end());
    inp.erase(it, inp.end());
    bool ans = false;
    for(int i =2;i<n;i++){
        if(inp[i-1] == inp[i-2] +1 && inp[i] == inp[i-1] +1 && inp[i] != inp[i-1] && inp[i-1] != inp[i-2] && inp[i] != inp[i-2]){
            ans = true;
        }
    }

    if(ans== true){
        cout << "YES" <<endl;
    }else{
        cout << "NO"<<endl;
    }

    return 0;
}