#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n ,k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool ans = false;
    int no_zero = 0;
    for(int i =0;i<n;i++){

        if(s[i] == '#'){
            no_zero++;
        }else{
            no_zero = 0;
        }
        if(no_zero >= k){
            ans = true;
            break;
        }

    }

    if(ans == true){
        cout << "NO" <<endl;
    }else{
        cout << "YES" <<endl;
    }

    return 0;
}