#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,k;
        cin >> n >> k;
        vector<int> pred(n);
        vector<int> org(n);
        for(int i =0;i<n;i++){
            cin >> pred[i];
        }
        for(int i =0;i<n;i++){
            cin >> org[i];
        }
        vector<int> pred_copy = pred;
        vector<int> org_copy = org;
        sort(org.begin(),org.end());
        sort(pred_copy.begin(),pred_copy.end());

        
    }
}