// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// using namespace std;

// int main(){
//     int m ,n ,i,j,k,ans;

//     cin >> n;
//     vector<int> a(n), vector<int>p;
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     cin >> m;
//     sort(a.begin(),a.end());
//     while(m--){
//         cin >> k;
//         ans = upper_bound(a,a+n,k) - a;
//         cout <<ans<<endl;
//     }
//     return 0;

// }

/// Another basic implementation code :

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, k;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // sort the array first

    cin >> m;
    while(m--){
        cin >> k;

        // Binary search manually
        int low = 0, high = n - 1;
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(a[mid] <= k){
                ans = mid + 1; // elements up to mid are <= k
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
