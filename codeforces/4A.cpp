#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    string res;
    if(n >2 ){
        if(n%2 == 0){
            res = "YES";
        }else{
            res = "NO";
        }
    }else{
        res = "NO";
    }
    std::cout<< res;
}