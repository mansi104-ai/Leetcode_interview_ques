#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >>t ;
    while(t--){
        int n;
        cin >> n;
        int cnt_one =0;
        string inp(n,' ');
        for(int i =0;i<n;i++){
            cin >> inp[i];
            if(inp[i] == '1'){
                cnt_one++;
            }
        }
        if(cnt_one == n || cnt_one == 0){
            cout << "YES" <<endl;
            continue;
        }
        
        bool answer = false;
        for(int i =1;i<n;i++){
            if(inp[i] == inp[i-1] && inp[i] == '0'){
                answer = true;
                break;
            }
        }
        answer == true ? cout << "YES" <<endl : cout << "NO" <<endl;
    }
    return 0;
}