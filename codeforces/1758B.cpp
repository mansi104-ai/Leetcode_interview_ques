#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
    cin >> n;

    if(n%2 == 1){
        for(int i =0;i< n;i++){
            cout << 7 << " ";
        }
    }else{
        cout <<  3 <<" "<<1 << " ";
        for(int i =0;i<n-2;i++){
            cout << 2 << " ";
        }
    }
    }

    return 0;
}