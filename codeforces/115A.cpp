#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int ans = 0,n , c =0 ,i;
    cin >> n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<=n;i++){
        c=0;
        int x = a[i];
        while(x != -1){
            x = a[x];
            c++;
        }

        ans = max(ans,c);
    }
    cout << ans+1 <<endl;
    return 0;
}