#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int m , n;
    cin >> m >> n;
    vector<int> inp1(m);
    vector<int> inp2(n);

    for(int i = 0; i < m; i++){
        cin >> inp1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> inp2[i];
    }

    // Sort both arrays once
    sort(inp1.begin(), inp1.end());
    sort(inp2.begin(), inp2.end());

    // Find the smallest common digit
    int answer = 10; // digits are 0-9, so initialize with 10 (invalid)
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(inp1[i] == inp2[j]){
                answer = min(answer, inp1[i]);
            }
        }
    }

    if(answer != 10){
        cout << answer << endl;
    } else {
        // No common digit, output the smallest two-digit number
        int a = *min_element(inp1.begin(), inp1.end());
        int b = *min_element(inp2.begin(), inp2.end());
        if(a < b) cout << a << b << endl;
        else cout << b << a << endl;
    }

    return 0;
}
