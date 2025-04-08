#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> res2;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int x = s.length();

        if(x <= 10){
            res2.push_back(s);
        } else {
            string abbr = s[0] + to_string(x - 2) + s[x - 1];
            res2.push_back(abbr);
        }
    }

    for(const string& word : res2) {
        cout << word << endl;
    }

    return 0;
}
