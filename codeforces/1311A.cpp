#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a ,b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << endl;
            continue;
        }
        if(a > b && (a-b) % 2 != 0 || b > a && (b-a) %2 == 0){
            cout << 2 << endl;
            continue;
        }

        else{
            cout << 1 << endl;
            continue;
        }
    }

    return 0;
}