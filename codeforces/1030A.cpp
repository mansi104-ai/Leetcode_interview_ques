#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,a;
    cin >> n;
    vector<int> ans;

    for(int i =0;i<n;i++){
        cin >>a;
        if(a == 1){
            cout << "HARD" ;
            return 0;
        }
        
    }
    cout << "EASY" <<"\n";
    return 0;
}