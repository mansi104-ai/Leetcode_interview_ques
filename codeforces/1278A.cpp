#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    string p, p_h;
    while(t--){
        cin >> p >> p_h;
        bool check = false;

        sort(p.begin(), p.end()); // sorted target string
        int pass_size = p.size();
        int l = 0;
        int r = pass_size - 1;

        while(r < p_h.size()){ // should be r < size, not r <= size
            string temp = p_h.substr(l, pass_size); // take substring
            sort(temp.begin(), temp.end()); // sort it (do not sort p_h in-place)
            if(temp == p){
                cout << "YES" << endl;
                check = true;
                break;
            }
            l++;
            r++;
        }

        if(!check)
            cout << "NO" << endl;
    }

    return 0;
}
