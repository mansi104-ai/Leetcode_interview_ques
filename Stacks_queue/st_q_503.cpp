#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> output(nums.size(),-1);
        stack<int> st;
        reverse(nums.begin(),nums.end());
        int count  =0;
        while(count < 2){
            for(int i =0;i<nums.size();i++){
                st.push(nums[i]);
                count++;
            }
        }


        for(int i =0;i<nums.size();i++){
            st.pop();
            while(st.top()!= nums[i]){
                if(st.top() > nums[i]){
                    output[i] = st.top();
                    continue;
                }

            }
        }
        return output;

    }
};


int main(){
  Solution s;
  vector<int> input = {1,2,3,4,3};
  vector<int> output;
  output = s.nextGreaterElements(input);
  for(auto& it : output){
    cout << it << " "<<endl;
  }

  return 0;
}