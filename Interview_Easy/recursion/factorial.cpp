#include <iostream>
using namespace std;

int factorial(int n){
    if(n== 0){
        return 1;
    }
    int chotti = factorial(n-1);
    int badi = chotti*n;
    return badi;
}


int main(){

    int n ;
    cin>> n;

    int ans = factorial(n);
    cout << ans<< endl;
}