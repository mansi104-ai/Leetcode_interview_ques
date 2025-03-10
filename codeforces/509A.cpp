#include <iostream>
using namespace std;

// //using basic rescursion
// class Solution{
//     public:
//     int resultFunction(int i,int j){
//         // int i,j;
//         int result = 0;
        
//         if(i <= 1 || j <= 1){
//             result = 1;
//         }
//         // result = resultFunction(i,j);
//         return resultFunction(i-1,j) + resultFunction(i,j-1);


//     }
// };

int resultFunction(int i,int j){
    // int i,j;
    // int result = 0;
    
    if(i <= 1 || j <= 1){
        return 1;
    }
    // result = resultFunction(i,j);
    return resultFunction(i-1,j) + resultFunction(i,j-1) ;
}
int main(){
    int n;
    std:: cin >> n;
    // cout<< s.resultFunction(n,n) << endl;
    // std::cout << <<endl;
    resultFunction(n,n);
    return -1;
}

// Given runtime error 