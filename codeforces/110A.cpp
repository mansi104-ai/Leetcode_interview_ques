#include <iostream>
#include <string>
using namespace std;

int main(){
    long long  n;
    cin >> n;
    string num = to_string(n);
    int cnt=0;
    for(int i =0 ;i<num.length();i++){
        if(num[i] == '4' || num[i] == '7'){
            cnt++;
        }
    }

    string num2 = to_string(cnt);
    for(int i =0;i<num2.length();i++){
        if(num2[i]!= '4' && num2[i]!= '7'){
            cout << num2[i];
            cout << "NO";
            return 0;

        }
    }
    cout << "YES";
    return 0;
}