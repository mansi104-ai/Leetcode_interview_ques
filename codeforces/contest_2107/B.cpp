#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_in_arr(vector<int> &arr){

    int max_n = INT_MIN;
    for(auto& x: arr){
        max_n = max(max_n ,x);
    }

    return max_n;
}

int min_in_arr(vector<int> &arr){

    int min_n = INT_MAX;
    for(auto& x : arr){
        min_n = min(min_n,x);
    }
    return min_n;
}

int main(){
    int  t;
    cin >> t;
    while(t--){
        int n , k;
        cin  >> n >> k;
        vector<int> inp(n);

        int sum_n =0;
        for(int i =0;i<n;i++){
            cin >> inp[i];
            sum_n += inp[i];
        }

        sort(inp.begin(),inp.end());

        bool player=0;
        int winner,loser;
        int i = 0;
        while(sum_n--){
            if(inp[i] < 1){
                loser = player;
                i++;
                break;
            }
            
            else if(inp[i] >= 1){
                inp[i]--;
                winner = player;
            }

            if(max_in_arr(inp) - min_in_arr(inp)>k){
                loser = player;
                break;
            }
            !(player);
            
        }
        winner = player;
        if(winner == 0){
            cout << "Tom"<<endl;
        }else{
            cout << "Jerry"<<endl;
        }
    }

    return 0;
}