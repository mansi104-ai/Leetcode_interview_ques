#include <iostream>
#include <set>
using namespace std;

int main(){
  
  //creating a set of integers type
  set<int> st;

  //Inserting a value in random order and with duplicates
  //in a set

  st.insert(10);
  st.insert(5);
  st.insert(15);
  st.insert(10);

  //Printing the elements in a set
  for(auto it:st){
    cout << it<<" ";
  }
  return 0;
}


///Properties of a set in cpp
//1. Set is a container that only stores the unique elements pushed to it
//2 . Set are implemented by using self-balancing binary search tree
//3. Sets always store the sorted elements in increasing order
//4. The time complexity of searching an element in a set is O(Logn)
//5. Space complexity : O(N)