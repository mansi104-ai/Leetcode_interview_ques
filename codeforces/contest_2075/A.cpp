#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, k, n;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        
        int result;
        if(n == k || n < k) {
            result = 1;
        }
        else {
            if((n % 2 != 0 && k % 2 != 0) || (n % 2 != 0 && k % 2 == 0)) {
                result = n / k;
                if (n % k != 0) result++; // Add this to handle remainder
            } else {
                result = n / k;
                if (n % k != 0) result++; // Integer division truncates, so add 1 if there's a remainder
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}