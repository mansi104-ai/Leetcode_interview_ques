#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x;
    std::cin >> n;
    vector<int> inp;
    for(int i = 0;i<n;i++){
        std::cin>>x;
        inp.push_back(x);
    }
    int cnt_grp = 0;
    for(int i =1 ;i<=n;i++){
        if(inp[i]!= inp[i-1]){
            cnt_grp++;
        }

    }
    std::cout << cnt_grp<<endl;
    return 0;
}