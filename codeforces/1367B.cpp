#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> inp(n);
        int moves_even = 0;
        int moves_odd = 0;
        for(int i =0;i<n;i++){
            cin>>inp[i];
            if(i % 2 != inp[i] % 2 ){
                if(i % 2 == 0){
                    moves_even++;
                }else{
                    moves_odd++;
                }
            }
        }

        if(moves_even == moves_odd && (moves_even + moves_odd) % 2 == 0){
            cout << moves_even <<endl;
        }else{
            cout << -1 <<endl;
        }
    }
    return 0;
}