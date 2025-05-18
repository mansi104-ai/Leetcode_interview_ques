#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string inp(n, ' ');  
        int count_one = 0;

        for(int i = 0; i < n; i++){
            cin >> inp[i];
            if(inp[i] == '1'){
                count_one++;
            }
        }

        if(count_one == n || count_one == 0){
            cout << "YES" << endl;
            continue;
        }

        if(count_one == n - 1){
            cout << "NO" << endl;
            continue;
        }
        // if(n == 3 && inp!= "010" && inp!= "011" && inp!= "101" && inp!= "110"){
        //     cout << "YES"<<endl;
        //     continue;
            
        // }
        bool ans = false;
        for(long long j = 0; j <= n - 3; j++){
            string sub = inp.substr(j, 3);
            if(sub != "011" && sub != "010" && sub != "101" && sub != "110"){
                ans = true;
                // break;
            }
        }

        if(ans){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
