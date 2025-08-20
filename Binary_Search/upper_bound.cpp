#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> v = {10,20,30,30,30,40,50};

  //Find the lower bound for 30
  auto it1 = lower_bound(v.begin(),v.end(),30);

  cout << "Lower Bound of 30 at index: "<< distance(v.begin(),it1)<<endl;

  //Find the lower bound for 25
  auto it2  = lower_bound(v.begin(),v.end(),25);

  cout << "Lower Bound of 25 at index: "<<distance(v.begin(),it2)<<endl;
  return 0;
}