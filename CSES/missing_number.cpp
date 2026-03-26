#include <iostream>
#include <vector>
using namespace std;

int main(){
  long long n;
  cin>>n;
  long long sum = n*(n+1)/2;
  long long actual=0;
  for(int i=1;i<=n;i++){
    long long m = 0;
    cin >> m;
    actual += m;
  }

  cout << sum - actual;
  return 0;
}