#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    int res=( (s.length()+1) * 26 ) - s.length();
    cout << res <<endl;
}