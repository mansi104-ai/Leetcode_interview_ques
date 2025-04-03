#include <iostream>
using namespace std;

int main(){
    int n;
    string inp;
    cin >> n;
    cin >> inp;
    int rem_stones;
    for(int i = 1;i<=n;i++){
        if(inp[i]== inp[i-1]){
            rem_stones++;
        }

    }
    cout << rem_stones;
    return 0;
}