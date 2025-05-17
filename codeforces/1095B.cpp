#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n ;
    cin >> n;
    vector<int> inp(n);
    for(int i =0;i<n;i++){
        cin >> inp[i];
    }

    sort(inp.begin(),inp.end());
    int diff_s = inp[n-2] - inp[0];
    int diff_e = inp[n-1] - inp[1];

    if(n <= 2){
        cout << 0 <<endl;
    }else{
        diff_s < diff_e ? cout << diff_s : cout << diff_e;
    }

    return 0;
}