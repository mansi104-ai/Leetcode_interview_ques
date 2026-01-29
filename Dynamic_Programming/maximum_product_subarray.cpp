#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//recursive approach only 
class Solution{
  public:
  int maxProduct(vector<int>&grid){
    //At each element, either we multiply it with the previous product till now 
    //or start the value of the product from here , 
    //This means that , at each element we track the current product and on multiplication 
    //the element may deccrease the value if its negative
    //but in the case of [-3,2,-1], we need to keep the track of value 
    //the highest value , the lowest value and if we take the element individually
    //if the current element, then the next element may or not be taken
    //which means it is independent of previous or future , we just need to store the min, max and the current values
    //This can be taken as a running product 
    //at2 , values to find -> 2, 2 * -3
    //at -1, values to store -> -1(nums[i]),2 * -1 (maxTillHere), -6 * -1(MinTillHere)
    //Then running product saves 2 values , maxtillhere, mintillhere
    int MinTillHere = grid[0];
    int MaxTillHere = grid[0];
    int result = grid[0];

    for(int i =1;i<grid.size();i++){
      int TmaxTillHere = MaxTillHere;
      MaxTillHere = max({grid[i],MaxTillHere * grid[i],MinTillHere * grid[i]});
      //At -1, maxtillHere will be 2 * -1 *-3 = -6
      //So MinTillHere, needs the prev value of Maxtillhere value 
      //Saves , maxtillhere = -2, and not -6
      MinTillHere = min({grid[i],MaxTillHere * grid[i],MinTillHere * grid[i]});
      //Finding min or max for exactly any number of values
      result = max(result,MaxTillHere);
    }

    //Return the max of minTillhere and maxtillhere
    return result;
  }
};
int main(){
  vector<int> grid = {2,3,-2,4};
  Solution s;
  cout <<s.maxProduct(grid);
  return 0;

}