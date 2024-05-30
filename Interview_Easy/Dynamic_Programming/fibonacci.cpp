#include <iostream>
#include <vector>
using namespace std;

int f(int n, vector<int> &dp){
    if(n<=1) return n;

    if(dp[n]!= -1) return dp[n];

    return dp[n] = f(n-1,dp)+f(n-2,dp);
}
int main(){
    // #ifndef ONLINE_JUDGE  //This is a preprocessor directive that checks if the code is being run on an online judge platform. If it is, the code inside the #ifndef block will not be executed.

    // freopen("input.txt", "r", stdin); 

    // //These lines redirect the standard input and output streams to files named "input.txt" and "output.txt", respectively. 
    // //This is useful for debugging and testing purposes, as it allows the program to read from and write to files instead of the console.

    // freopen("output.txt","w", stdout);

    // #endif

    int n;
    cin>> n;
    vector<int> dp(n+1,-1);
    cout << f(n,dp);
    //This line initializes all elements of the dp array to -1. The memset function is used to fill the array with a specific value.
    // In this case, the value is -1, which is a common initial value for dynamic programming arrays.
    return 0;
}