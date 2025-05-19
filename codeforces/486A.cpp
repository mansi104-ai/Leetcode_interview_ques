#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long n ;
    cin >> n;
    long long res = 0;
    if( n % 2 == 0){
        res = n/2;
    }else{
        res =  ceil(-n/2)-1;
    }
    cout << res <<endl;
    return 0;
}