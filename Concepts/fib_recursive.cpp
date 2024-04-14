#include <sstream>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std; 

int fib(int n){
    if(n>=3){
        int result = fib(n-1)+fib(n-2);
        return result;
    }

    else{
        return 1;
    }
}

int main(){
    cout << "fib seq upto n = 9: "<< fib(9);
}