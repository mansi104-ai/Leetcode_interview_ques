#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> inp(n);
    for(int i =0;i<n;i++){
        cin >> inp[i];
    }

    if(n==1){
        cout << 1 <<endl;
        return 0;
    }
    vector<int> temp = inp;
    sort(temp.begin(),temp.end());
    if(temp[0] == temp[1]){
        cout  << "Still Rozdil" <<endl;
    }else{
        for(int i = 0;i<n;i++){
            if(inp[i]== temp[0]){
                cout << i+1 <<endl;
                break;
            }
        }
    }

    return 0;
}