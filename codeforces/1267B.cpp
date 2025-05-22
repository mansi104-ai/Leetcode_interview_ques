#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void rem_dup(string inp){
    for(int i =1;i<inp.size();i++){
        if(inp[i] == inp[i-1]){
            inp.erase(inp.begin()+i);
        }
    }
}
int main(){
    string s;
    cin  >> s;
    
    // Check if all elements are the same
    bool allSame = true;
    for(int i = 1; i < s.length(); i++){
        if(s[i] != s[0]){
            allSame = false;
            break;
        }
    }
    if(allSame){
        cout << s.length()+1 << endl;
        return 0;
    }
    
    string temp = s;
    sort(temp.begin(),temp.end());

    vector<int> freq_cnt(s.length());
    int freq = 1;
    int cnt_two = 0;
    for(int i =0;i<s.length();i++){
        if(temp[i+1] != temp[i]){
            freq_cnt.push_back(freq);
            freq = 1;

        }else{
            freq++;
        }


    }
    for(auto& x : freq_cnt){
        if(x == 1){
            cout << 0 << endl;
            return 0;
        }
        if(x == 2){
            cnt_two++;
        }
    }

    if(cnt_two > 1){
        cout << 0 <<endl;
        return 0;
    }
    // // Remove consecutive duplicates from the string
    rem_dup(s);

    //Now look for the palindromes

    bool isPalindrome = true;
    //For odd length palindromes

    if(s.length() % 2 != 0 ){
        int mid = s.length()/2;
        int l , r = mid;
        while(l >= 0 && r < s.length()){
            if(s[l] != s[r]){
                isPalindrome= false;
                break;
            }
            l--;
            r++;
        }
    }
    int mid = s.length()/2;
    if(s.length() % 2 == 0){
        int l = mid -1;
        int r = mid;
        while(l >= 0 && r < s.length()){

            if(s[l] != s[r]){
                isPalindrome= false;
                break;
            }
            l--;
            r++;
        }
    }

    if(isPalindrome == false){
        cout << 0 <<endl;
        return 0;
    }

    int center_cnt = 1;
    int l = mid-1 ;
    int r = mid +1; // count the mid element itself

    // Expand to the left
    while (l >= 0 && s[l] == s[mid]) {
        center_cnt++;
        l--;
    }

    // Expand to the right
    while (r < s.size() && s[r] == s[mid]) {
        center_cnt++;
        r++;
    }
    cout << center_cnt+1 <<endl;
    return 0;
}