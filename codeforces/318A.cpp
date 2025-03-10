// !------------------------WRONG FOR A TEST CASE -------!

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public: 
//     int ReturnNthnumber(int n, int k){
//         int result = 0;
//         if(k < n/2){
//             result = (k * 2)-1;
//         }else{
//             int fig = k % (n/2);
//             if(fig == 0){
//                 return (n);
//             }
//             result = fig *2;
//         }
//         return result;
//     }
// };

// int main(){
//     int n , k;
//     cin >> n,k;
//     Solution s;
//     cout << s.ReturnNthnumber(n,k) << " ";
//     return -1;

// }


// Corrected solution 
#include <iostream>
 
int main() {
    long long n, k;
    std::cin >> n >> k;
    
    // Calculate number of odd integers from 1 to n
    long long odd_count = (n + 1) / 2;
    
    if (k <= odd_count) {
        // If k is in the odd section
        std::cout << 2 * k - 1 << std::endl;
    } else {
        // If k is in the even section
        std::cout << 2 * (k - odd_count) << std::endl;
    }
    
    return 0;
}