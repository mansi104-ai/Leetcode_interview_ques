#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
  unordered_set<int> ust;

  //Inserting values into the set
  //Duplicates

  
  ust.insert(10);
  ust.insert(5);
  ust.insert(10);
  ust.insert(15);

  //Printing the elements of a set to check if it stores unique elements 
  for(auto it: ust){
    cout << it << " ";
  }

  return 0;
}