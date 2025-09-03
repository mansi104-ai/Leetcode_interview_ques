#include <iostream>
using namespace std;

// int main(){
//   int x, l ,r;
//   //Using linear search
//   cin >> x >> l >>r;

//   int max_val = INT_MIN;
//   for(int i = l;i<=r;i++){
//     max_val = max(max_val, x^i);
//   }
//   cout << max_val;
//   return 0;
// }

int main(){
  int x, l,r;
  cin >> x >> l >>r;

  //Step 1 : Find the maximum XOR possible in [l,r]

  int msb= 0;
  while((1 << msb) <= r)msb++;
  int best_possible = (1 << msb) -1;

  //Step 2 : Answer is min(best_possible, actual maximum we can form)
  int max_val = 0;
  for(int i =l;i<= r;i++){
    max_val = max(max_val, x^i);
  }

  cout << min(max_val,best_possible);
  return 0;
}