#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++){
        if(n[i] == 'B' && n[i-1] == 'U' && n[i-2] == 'W'){
            n.replace(i-2,3, " ");
        }
    }
    cout << n;
    return 0;
}