#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution{
   public:
   int convertTime(string current, string correct){

    // first convert all the time intervals to integers using substring property of strings
   int h1 = stoi(current.substr(0,2));
   int m1 = stoi(current.substr(3,2));
   int h2 = stoi(correct.substr(0,2));
   int m2 = stoi(correct.substr(3,2));

   // find out the difference between only the hours 
   // let's say the numbers are 04and 7, then the difference is 7-4 = 3
   // but if the numbers are 4 and 3, then the difference is 7-4 = 3 + 24 -3 = 22
   // so we add 24 to the difference if the hour difference is negative
   // and then we find the difference between the minutes
   // if the minute difference is less than 15, then we can use 1 minute interval
   // if the minute difference is less than 5, then we can use 5 minute interval
   // if the minute difference is less than 15, then we can use 15 minute interval
   // and then we can use 60 minute interval to convert the time

   int hrDiff = h2-h1; 

   if(hrDiff<0) hrDiff += 24;
   int minDiff = m2-m1;

   // find the total minutes by converting the hours into minutes
   int total = (hrDiff*60) + minDiff;

   int ans(0);

      // if the minute difference is less than 15, then we can use 1 minute interval
   // if the minute difference is less than 5, then we can use 5 minute interval
   // if the minute difference is less than 15, then we can use 15 minute interval
   // and then we can use 60 minute interval to convert the time
   if(total >= 60){
   ans += total/60;
   total = total%60;
   }
   
  if(total >= 15){
   ans += total/15;
   total = total %15;
  }

  if(total >= 5){
   ans += total/5;
   total = total%5;
  }
    // case of 1 minute , ans will be equal to the total
ans += total;
return ans;
}

};

int main() {
    Solution s;
    cout << s.convertTime("00:30", "04:35") << endl; 
    return 0;
}