#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string inp;
    cin >> inp;
    int n = inp.length();
    sort(inp.begin(), inp.end());
    
    int distinctCount = 1; 
    

    for(int i = 1; i < n; i++){
        if(inp[i] != inp[i-1]){ // loop correctly
            distinctCount++;
        }
    }
    
    
    if(n == 0) {
        distinctCount = 0;
    }
    
    if(distinctCount % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}