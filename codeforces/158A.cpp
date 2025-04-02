#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n,k,m;
    std::cin >> n>>k;
    vector<int> inp;
    for(int i = 0;i<n;i++){
        std::cin>>m;
        inp.push_back(m);
    }
    // sort(inp.begin(), inp.end(), greater<int>());
    int val,cnt;
    val = inp[k-1];
    for(int i = 0;i<n;i++){
        if(inp[i]>= val && inp[i]>0){ // no need for sorting, just keep in mind the condition for comparing inp[i]
            cnt++;
        }
    }
    std::cout << cnt;
    return 0;
}