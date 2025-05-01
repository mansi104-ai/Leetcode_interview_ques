#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        
        // Try reducing a first, then b
        long long a1 = a;
        long long b1 = b;
        long long n1 = n;
        
        long long da = min(n1, a1 - x);
        a1 -= da;
        n1 -= da;
        
        long long db = min(n1, b1 - y);
        b1 -= db;
        
        long long prod1 = a1 * b1;
        
        // Try reducing b first, then a
        long long a2 = a;
        long long b2 = b;
        long long n2 = n;
        
        db = min(n2, b2 - y);
        b2 -= db;
        n2 -= db;
        
        da = min(n2, a2 - x);
        a2 -= da;
        
        long long prod2 = a2 * b2;
        
        // Output the minimum product
        cout << min(prod1, prod2) << endl;
    }
    
    return 0;
}