#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, t;
    for(int i =0;i<n;i++){
        bool possible = false;
        cin >> s >> t;
        for(int j =0;j<s.length();j++){
            for(int k =0;k < t.length();k++){
                if(s[j] == t[k]){
                    possible = true;
                    
                }
            }
        }

        if(possible == true){
            cout << "YES" << endl ;
        }else{
            cout << "NO" <<endl;
        }

    }
    return 0;
}


//Instead of normal searching ,  can apply sorting within strings and then remove duplicate characters to find if there are common characters
