#include <iostream>
using namespace std;
int main(){
    int n ,k;
    std::cin >> n >> k;
    int i,r;
    for(i = 1;i<=4;i++){
        r = n%10;
        if(r == 0){
            n/=10;
        }else{
            n--;
        }
    }
    cout << n;
    return 0;

}