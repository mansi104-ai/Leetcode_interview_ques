#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    std::cin >> n;
    string s;
    int res = 0;
    for(int i =0;i<n;i++){
        std::cin >>s;

        if(s == "++X" || s == "X++"){
            res+=1;

        }else{
            res-= 1;
        }
        
    }
    std::cout<< res;
}