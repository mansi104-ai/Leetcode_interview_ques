#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        vector<int> rec1(2);
        vector<int> rec2(2);

        cin >> rec1[0] >> rec1[1];
        cin >> rec2[0] >> rec2[1];

        sort(rec1.begin(), rec1.end());
        sort(rec2.begin(), rec2.end());

        if(rec1[1] != rec2[1]) {
            cout << "No" << endl;
            continue;
        }

        if(rec1[0] + rec2[0] != rec1[1]) {
            cout << "No" << endl;
            continue;
        }

        cout << "Yes" << endl;
    }

    return 0;
}
