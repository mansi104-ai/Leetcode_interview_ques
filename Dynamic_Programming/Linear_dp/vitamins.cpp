// json : 2 employees -> employee id , employee name and birthdate
// employees :{
//   ['221','mansi','10/10/2004']
// }
{a,c,f,e}
{(a,1),(c,1),}

#include <iostream>
#include <string>
#include <unordered_map>
using namespaace std;

vector<vector<int>> convertstr_2ord(string s){

  unordered_map<char,int> mp;

  for(int i =0;i<s.length();i++){    
    mp[s[i]]++;
  }
  
  
  //
}

