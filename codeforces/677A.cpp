#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n , h;
    cin >> n >> h;
    int height =0;
    vector<int> inp(n);
    for(int i =0;i<n;i++){
        cin >> inp[i];
        if(inp[i] > h){
            height+= 2;
        }else{
            height += 1;
        }
    }
    cout << height <<endl;
    return 0;
}