#include <iostream>
using namespace std;

int pow(int n){
    if(n== 1){
        return 0;
    }
    else if( n==2){
        return 1;
    }
    return pow(n-1)+pow(n-2);
}

int main(){
    int n;
    cin>> n;

    int ans = pow(n);
    cout << ans<< endl;

    return 0;
}