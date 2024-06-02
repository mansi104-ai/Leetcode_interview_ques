#include <iostream>
#include<vector>
using namespace std;

int climbStairs(int n){
    if(n== 0 || n==1){
        return 1;
    }

    int prev = 1;
    int prev2 = 1;
    for(int i=2;i<=n;i++){
        int curi = prev+ prev2;
        prev2 = prev; 
        prev = curi;
    }
    return prev;

}

int main(){
    int n;
    cin >>n;
    cout << climbStairs(n)<< endl;
    return 0;
}