#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n;
    cin >>n;
    if(n<4){
        cout << -1 <<endl;
    }else{
        int odd = (n&1) ? n : n-1; // Largest odd number less than or equal to n
        while(odd >= 1){
            cout <<odd << " "; //Print all the odd numbers
            odd-= 2;

        }

        cout << 4 << ' ' << 2 << ' ';

        int even =6;
        while(even <= n){
            cout << even << ' ';
            even += 2;
        }

        cout << "\n";
    }
    }
    
    return 0;
}