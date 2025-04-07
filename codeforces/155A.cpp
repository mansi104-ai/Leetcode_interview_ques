#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int amazing = 0;
    int min_val = scores[0];
    int max_val = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > max_val) {
            amazing++;
            max_val = scores[i];
        } else if (scores[i] < min_val) {
            amazing++;
            min_val = scores[i];
        }
    }

    cout << amazing << endl;

    return 0;
}
