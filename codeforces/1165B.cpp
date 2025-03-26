#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, r;
    cin >> n;
    int count_day = 0;
    vector<int> day_prob(n);
    
    for (int i = 0; i < n; i++) {
        cin >> day_prob[i];
    }

    sort(day_prob.begin(), day_prob.end());

    if (day_prob[0] >= 1) {
        count_day++;
    }

    for (int j = 1; j < n; j++) {  // Fixed loop range
        if (day_prob[j] > count_day) {
            count_day++;
        }
    }

    cout << count_day << endl;  // Print the result

    return 0;
}
