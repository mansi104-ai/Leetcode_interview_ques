#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , x,y;
    string k;
    cin >> n >> x >> y;
    cin >> k;
    int cnt =0;
    for(int i= 0;i <x ;++i){

        int pos = n - i - 1;
        if(i == y){
            if(k[pos] != '1'){
                cnt++;
            }
        }else{
            if(k[pos]!= '0'){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}