#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";
    int i = 0;

    while (i < n) {
        if (i + 2 < n && s[i] == 'o' && s[i + 1] == 'g' && s[i + 2] == 'o') {
            result += "***";
            i += 3;
            while (i + 1 < n && s[i] == 'g' && s[i + 1] == 'o') {
                i += 2;
            }
        } else {
            result += s[i];
            i++;
        }
    }

    cout << result << endl;
    return 0;
}
