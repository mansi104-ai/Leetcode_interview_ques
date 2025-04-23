#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >>n>>m;
    long long a = 0;
    vector<int> inp(m);
    for(int i =0;i<m;i++){
        cin >>inp[i]; 
    }
    a += inp[0] - 1;

    for(int i=1;i<inp.size();i++){
        if(inp[i] == inp[i-1]){
            continue;
            // cout << a << endl;
        }

        else if(inp[i] < inp[i-1]){
            if(inp[i] == 1){
                a += n - inp[i-1] + 1;
            }else{
                a += n - inp[i-1] + inp[i];
            }
            
        }
        else{
            a += inp[i] - inp[i-1];
            // cout <<a <<endl;
        }
    }

    cout << a;
    return 0;
}