#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int diff = 240-k;

    int curr_prob = 0;
    
    for(int i =1;i<=n;i++){
        diff -= 5*i;
        if(diff >=0){
            curr_prob++;
            // cout << diff<<endl;
        }
    }
    cout << curr_prob;
    return 0;
    }
