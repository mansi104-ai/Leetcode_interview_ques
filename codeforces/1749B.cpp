#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// long long findMaxEleIndx(vector<long long> arr){
//     long long max_idx= 0;
//     long long max_ele = arr[0];
//     for(long long i =0;i<arr.size();i++){
//         if(arr[i] > max_ele){
//             max_ele = max(max_ele,arr[i]);
//             max_idx = i;
//         }
//     }
//     return max_idx;
// }
// int main(){
//      long long t;
//      cin >> t;
//      while(t--){
//         long long n;
//         cin >>n;
//         vector<long long> inp1(n);
//         vector<long long> inp2(n);
//         for(long long i =0;i<n;i++){
//             cin >> inp1[i];
//         }
//         for(long long i =0;i<n;i++){
//             cin >> inp2[i];
//         }
//         vector<long long> res(n);
//         for(long long i =0;i<n;i++){
//             if(i == 0 || i == n-1){
//                 res[i] = inp1[i] + inp2[i];
//             }else{
//                 res[i] = inp1[i] + (2 *inp2[i]); 
//             }
//         }
//         long long mex = findMaxEleIndx(res);
//         res[mex] = inp1[mex];
//         long long curr_sum = 0;
//         for(long long i =0;i<n;i++){
//             curr_sum += res[i];
//         }
//         cout << curr_sum<<endl ; 
//      }
//      return 0;
// }


/// Best way for this problem :
int main(){
    long long t,i;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n),b(n);
        long long sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+= a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(b.begin(),b.end());

        for(i=0;i<n-1;i++) sum+= b[i];
        
        cout<<sum<<endl;
    }
    return 0;
}