#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t ;
    cin >>t;
    while(t--){
        int n ;
        cin >> n;
        int max_n ;
        int same_count =1;
        vector<int> outp(n,0);
        vector<int> inp(n);
        for(int i =0;i<n;i++){
            cin >> inp[i];
            max_n = max(max_n,inp[i]);
            if(inp[i] == inp[i-1]){
                same_count++;
            }
        }

        if(same_count == n){
            cout << "NO" <<endl;
            continue;
        }

        if(n == 2){
            if(inp[0] != inp[1]){
                cout << "YES"<<endl;
                cout << 1 <<" "<< 2<< endl;
                continue;
                
            }else{
                cout << "NO" <<endl;
                continue;
            }
        }
        int same_div = 0;
        for(int i =max_n; i >= 1;i--){
            for(int j = 0;j<n;j++){
                for(int k =0;k<n;k++){
                    if(inp[j] % i == inp[k] % i != 1){
                        outp[j] = 1;
                        outp[k] = 1;
                    }
                }
            }
        }
        
        for(int i =0;i<outp.size();i++){
            if(outp[i] != 1){
                outp[i] =2;
            }else{
                same_div++;
            }
        }

        if(same_div > 1){
            cout << "YES"<<endl;
            for(auto& x : outp){
                cout << x << " ";
            }
        }else{
            cout << "NO" <<endl;
        }

    }
    return 0;
}