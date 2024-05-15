#include <iostream>
using namespace std;

int minCoins(int coins[],int m, int V){
    int res = INT_MAX;
    if(V==0){
        return 0;
    }

    for(int i=0;i<m;i++){
        if(coins[i]<= V){

            int subRes = minCoins(coins, m, V-coins[i]);
            if(subRes < INT_MAX && subRes+1 <res){
                res = subRes+1;
            }
        }
    }

    return res;
}

int main(){
    int coins[]= {9,5,6,1};
    int m = sizeof(coins)/sizeof(coins[0]);
    int res = minCoins(coins,m, 14);

    cout << "the minimum number of coins required: "<< res << endl;

    return 0;
}