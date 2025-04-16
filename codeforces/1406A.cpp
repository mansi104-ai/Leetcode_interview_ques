#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int j = 0; j < t; j++) {
        int n;
        cin >> n;
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        vector<int> w, x;
        
        for(int i = 0; i < n; i++) {
            if(i > 0) {
                if(v[i] == v[i-1]) {
                    x.push_back(v[i]);
                } else {
                    w.push_back(v[i]);
                }
            } else {
                w.push_back(v[i]);
            }
        }
        
        int mex1 = 0;
        for(int i = 0; i <= w.size(); i++) {
            auto it = find(w.begin(), w.end(), i);
            if(it == w.end()) {
                mex1 = i;
                break;
            }
        }
        
        int mex2 = 0;
        if(x.size() > 0) {
            for(int i = 0; i <= x.size(); i++) {
                auto it = find(x.begin(), x.end(), i);
                if(it == x.end()) {
                    mex2 = i;
                    break;
                }
            }
            cout << mex1 + mex2 << "\n";
        } else {
            cout << mex1 << "\n";
        }
    }
    
    return 0;
}