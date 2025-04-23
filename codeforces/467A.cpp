#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a,b;
    cin  >> n;
    int cnt =0;
    for(int i =0;i<n;i++){
        cin  >>a>>b;
        if(b-a >=2){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
    
}