#include <iostream>
#include <map>
using namespace std;


//Function for inserting elements to map using c++  stl
void InsertElements(map<int,string>& mp,int k,string m){
  mp.insert({k,m});
}


int main(){
  map<int,string> mp;
  InsertElements(mp,1,"Hello");
  InsertElements(mp,2,"Mansi");
  InsertElements(mp,3,"Beautiful");
  // Code to print the key to value paris present in the map
  for(auto x : mp){
    cout << x.first << " "<<x.second << endl;
  }

  //Function to access elements in a map using key
  cout<< mp[1] <<endl;
  cout << mp.at(2)<<endl;

  //Upadating elements in a map
  mp[1] = "Twerk";
  mp.at(2) = "Cutie";

  //Finding element in a map
  auto it = mp.find(2);
  if(it!= mp.end()){
    cout << it->first << " "<< it->second  << endl;
  }

  //Traversal in a map
  for(auto i = mp.begin();i!= mp.end();++i){
    cout << i->first<<" "<<i->second<<endl;
  }

  //Deleting elements from a map
  mp.erase(2);

  //Deleting by using iterator
  mp.erase(mp.begin());

  //Traversing again in the map
  for(auto it = mp.begin();it!= mp.end();++it){
    cout << it->first << " "<< it->second << endl;
  }
  return 0;

}