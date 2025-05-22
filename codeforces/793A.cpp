#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    long long rem = 0;
    vector<long long> inp(n);
    for(long long i =0 ;i<n;i++){
        cin >> inp[i];
    }
    sort(inp.begin(),inp.end());
    bool ispossible = false;
    long long cnt = 0;
    for(long long  i= 1;i<n;i++){
        if((inp[i] - inp[0]) % k != 0){
            ispossible = true;
            break;
        }else{
            cnt += (inp[i] - inp[0])/k;
        }
    }

    if(ispossible == true){
        cout << -1 <<endl;
    }else{
        cout << cnt <<endl;
    }

    return 0;
}