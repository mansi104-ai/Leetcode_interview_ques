#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int rem = n % 7;
    int min_h,max_h;
    if(n == 1){
        min_h = 0;
        max_h = 1;
    }
    if(rem == 1){
        cout << 2* n / 7  << " "<< 2* n /7 + rem <<endl;
    }
    else if(rem == 2 || rem == 3 || rem == 4 || rem == 5){
        cout << 2*(n / 7)  << " "<< 2 *(n/7) +2  << endl;
    }
    else if(rem == 6){
        cout << (2 * ((n+1)/7)) -1 << " "<<2 *((n+1) /7) <<endl;
    }else{
        cout << 2 * (n/7) << " "<< 2 * (n/7) <<endl;
    }

    return 0;
}