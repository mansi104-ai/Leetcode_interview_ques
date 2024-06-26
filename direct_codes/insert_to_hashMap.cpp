#include<iostream>
#include<unordered_map>
using namespace std;

int n = arr.size();

unordered_map<int, int> mp;
for(int i=0;i<n;i++){
    mp[nums[i]] = i;
}