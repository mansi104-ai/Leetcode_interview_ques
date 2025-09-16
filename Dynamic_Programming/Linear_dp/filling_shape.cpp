#include <iostream>
#include <vector>
using namespace std;

int numWays(int n){
  if (n==0)return 1;
  if(n%2 != 0)return 0;
  return 2*numWays(n-2);

}

int main(){
  int n = 1;
  cin >> n;
  cout << numWays(n) <<endl;
  return 0;
}