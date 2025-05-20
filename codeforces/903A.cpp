#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>> n;
    int a;
    for(int i =0;i<n;i++){
        cin >> a;
        bool ans = false;
        for(int i =0;i<34;i++){
            for(int j =0;j< 34;j++){
                if(3 * i + 7 * j == a){
                    ans = true;
                    break;
                }
            }
        }

        ans == true ? cout << "YES" <<endl : cout << "NO" <<endl;
    }
    return 0;
}