#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int a,b,c;
    while(n--){
        cin >> a >> b >> c;
        if((a + b + c ) % 3 == 0 && a+b != c){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}