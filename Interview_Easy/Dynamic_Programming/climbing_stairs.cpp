#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n){
    if(n==0 || n==1){
        return 1;
    }

    int left = climbStairs(n-1);
    int right = climbStairs(n-2);

    return left+ right;
}

int main(){
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}