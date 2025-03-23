#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, k,n;
    string s;
    string res;
    std::cin >> t;

    for(int i =0;i<t;i++){
        std::cin >> n>>k;
        std::cin >> s;
        // string res;
       string reverse_string = string(s.rbegin(),s.rend());
       if(s == reverse_string){
        res = "NO";
    }
    int act_val , rev_val;
    act_val = s[i] - 'A'+97;
    rev_val = reverse_string[i] - 'A' + 97;

    if(k == 0){
        if(act_val < rev_val){
            res = "YES";
        }else{
            res = "NO";
        }
    }
    else{
        res = "YES";
    }
    std::cout << res <<std::endl;

    }
    return 0;

}