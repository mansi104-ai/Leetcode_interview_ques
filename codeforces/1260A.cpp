#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a ,b;
    
    for(int i =0;i<n;i++){
        cin  >> a >>b;
        int q = b / a;
        int r = b % a;

        long long ans ;
        ans = (q * q *( a -r) ) + ( r * (q + 1)*(q+1));

        cout << ans << endl;
    }
    return 0;
}