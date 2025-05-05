// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >> n;
//         if(n== 1){
//             cout << 0 << endl;
//             continue;
//         }
//         if(n == 2){
//             cout <<1 <<endl;
//             continue;
//         }
//         vector<int> inp(n);
//         for(int i =0;i<n;i++){
//             cin >> inp[i];
//         }

//         sort(inp.begin(),inp.end());

//         int same_count = 0;
//         int diff_count = 0;

//         for(int i =0;i<n;i++){
//             if(inp[i] == inp[i+1]){
//                 same_count++;
//             }else{
//                 diff_count ++;
//             }
//         }
        
//         if(same_count >1){
//             same_count ++;
//             diff_count --;
//         }
//         if(diff_count == 1 && same_count > 2){
//             cout << 2 <<endl;
//         }
//         if(same_count == 0 || diff_count <= 1 && same_count <= 2){
//             cout << 1 <<endl;
//             continue;
//         }else{
//             cout << min(diff_count,same_count) <<endl;
//             continue;
//         }

//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        int max_freq = 0;
        for(auto p : freq){
            max_freq = max(max_freq, p.second);
        }

        int distinct = freq.size();

        int ans = min(max_freq, distinct - (max_freq == distinct ? 1 : 0));
        cout << ans << endl;
    }
    return 0;
}
