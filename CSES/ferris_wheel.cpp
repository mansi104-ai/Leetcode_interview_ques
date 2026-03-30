#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
  public:
  long long gondolas(vector<long long>& a, long long x){
    sort(a.begin(), a.end());
    int i = 0, j = a.size() - 1;
    long long count = 0;

    while(i <= j){
        if(a[i] + a[j] <= x){
            i++; //Either send the lighest and the heavist possible 
        }
        j--; //or send the lightest alone
        count++;
    }
    return count;
  }
};

int main(){
  long long n;
  cin >> n;
  long long x;
  cin >> x;

  vector<long long> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  Solution s;
  int result = s.gondolas(a,x);
  cout << result;
  return 0;

}