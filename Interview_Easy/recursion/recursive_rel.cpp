#include <iostream>
using namespace std;

void recursion(int n){
    if(n==0){
        return;
    }
    recursion(n-1);
    cout << n << endl;
    // recursion(n-1);
}


int main(){
    int n ;
    cin>> n;
    cout << endl;
    recursion(n);
    return 0;

}