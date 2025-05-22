#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n ,k ;
    cin >> n >>k;
    vector<int> inp(n);
    for(int i =0;i<n;i++){
        cin >> inp[i];
    }

    sort(inp.begin(),inp.end());
    cout << inp[n-k] <<endl;

    return 0;
}