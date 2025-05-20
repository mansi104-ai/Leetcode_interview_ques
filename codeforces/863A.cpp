#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string n;
    cin >> n;
    bool flag = 0;
    for(long long i =n.length()-1;i>=0;i--){
        if(n[i] == '0'){
            n.erase(i,1);
        }else{
            break;
        }
    }

    // cout << n <<endl;

    // Check if the string is palindrome
    if(n.length() == 2){
        if(n[0] != n[1]){
            flag = 1;
        }
    }
    //For odd sized string
    if(n.length() % 2 != 0){
        long long s = n.length()/2;
        long long l = s;
        long long r = s;
        while(l>=0 && r < n.length()){
            if(n[l] != n[r]){
                flag = 1;
                break;
            }

            l--;
            r++;
        }
    }

    // For even sized string
    else{
        long long s = n.length()/2;
        long long l = s-1;
        long long r = s ;
        while(l >= 0 && r < n.length()){
            // cout << n[l] << n[r]<<endl;
            if(n[l] != n[r]){
                flag = 1;
                break;
            }
            l--;
            r++;
        }
    }

    if(flag == 1){
        cout << "NO" <<endl;
    }else{
        cout << "YES" <<endl;
    }
    return 0;
}
