#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main(){
  int l , r;
  cin >> l >> r;
  string one = to_string(l);
  string two = to_string(r);

  sort(one.begin(),one.end());
  int max1 = one[one.length()-1]-one[0];
  int max2 = two[two.length()-1]-two[0];

  
    int i = l;
    while(i <= r){
      string s = to_string(i);
      sort(s.begin(),s.end());
      
      set<char> digit_set;

    // Use a set to automatically handle distinctness
        for (char c : s) {
            digit_set.insert(c);
        }
        if(digit_set.size() == s.length()){
          cout << i << endl;
          return 0;
      }
      i++;
    }

  cout << -1 << endl;

}