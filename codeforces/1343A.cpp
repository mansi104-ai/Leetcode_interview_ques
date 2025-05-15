#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long n ;
        cin >> n;
        long long sum_n  = 1;
        int i =1;
        while(sum_n < n){
            sum_n += pow(2,i++);
            if(n % sum_n == 0){
                cout << n /sum_n <<endl;
                break;
            }

        }
    
    }
    return 0;
}