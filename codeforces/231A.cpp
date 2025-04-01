#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n , a,b,c;
    std::cin >> n;
    int winCount = 0;
    for(int i =0;i<n;i++){
        cin >> a >> b >> c;
        if(a+b+c >= 2){
            winCount++;
        }
    }
    cout << winCount;
    return 0;
}