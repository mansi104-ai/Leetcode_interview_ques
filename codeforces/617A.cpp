#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin  >> n;
    if(n==0){
        cout << 0;
    }
    if(n>= 1 && n<6){
        cout << 1;
    }else if(n%5 == 0){
        cout << n/5;
    }
    else{
        cout << (n/5)+1;
    }
    return 0;
}