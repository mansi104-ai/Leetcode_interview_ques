#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n ;
    string s;
    cin >> s;

    int cnt_u = 0;
    int cnt_r = 0;
    for(int i = 0;i<n ;i++){
        if(s[i] == 'U'){
            cnt_u++;
        }else{
            cnt_r++;
        }
    } 

}