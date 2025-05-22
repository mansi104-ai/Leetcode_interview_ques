#include <iostream>
#include <vector>
using namespace std;

// vector<int> removedupzero(vector<int> inp) {
//     vector<int> result;
//     bool lastWasZero = false;

//     for (int val : inp) {
//         if (val == 0) {
//             if (!lastWasZero) {
//                 result.push_back(0);
//                 lastWasZero = true;
//             }
//         } else {
//             result.push_back(val);
//             lastWasZero = false;
//         }
//     }
//     return result;
// }

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0;
        string s;
        cin>>n>>s;

        for(i=0;i<n-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='0') cnt+=2;
        }
        if(s[n-1]=='0' && cnt) cnt--;

        cout<<cnt<<endl;
    }
    return 0;
}
