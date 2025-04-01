#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int LowerAlp = 0, UpperAlp = 0, n = s.length();

    for (int i = 0; i < n; i++) {
        if (islower(s[i])) {
            LowerAlp++;
        } else {
            UpperAlp++;
        }
    }

    if (LowerAlp >= UpperAlp) {
        for (int i = 0; i < n; i++) {
            cout << (char)tolower(s[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << (char)toupper(s[i]);
        }
    }

    cout << endl; // Ensuring a newline at the end of output
    return 0;
}
