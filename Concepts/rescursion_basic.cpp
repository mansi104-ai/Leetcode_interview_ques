#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <iostream> 
using namespace std;

int Factorial(int number){
    if(number ==1){
        return 1;
    }
    else{
        int result = number* Factorial(number-1);
        return result;
    }
}

int main(){
    cout << "Factorial 6 = "<< Factorial(6);
    return 0;
}