#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>  // for INT_MAX

using namespace std;

int main(){
    int n, m, o;
    cin >> n >> m;

    vector<int> fs(m);
    for(int i = 0; i < m; i++){
        cin >> fs[i];
    }

    sort(fs.begin(), fs.end());

    int diff = INT_MAX;
    for(int i = 0; i <= m - n; i++){
        int curr_diff = fs[i + n - 1] - fs[i];
        diff = min(diff, curr_diff);
    }

    cout << diff << endl;
    return 0;
}
