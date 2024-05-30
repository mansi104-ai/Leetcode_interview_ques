// You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

// You can either start from the step with index 0, or the step with index 1.

// Return the minimum cost to reach the top of the floor.


//  https://leetcode.com/problems/min-cost-climbing-stairs/solutions/476388/4-ways-step-by-step-from-recursion-top-down-dp-bottom-up-dp-fine-tuning/

/* Step1 : identify a recurrence relation between subproblems., here the recurrence relation :
 mincost[i] = cost[i] + min(mincost[i-1],mincost[i-2]); */

/*Step 2 : */

// Convert the recurrence relation to recursion

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
     int minCostClimbingStairs(vector<int> &cost){
        int n = cost.size();
        return min(minCost(cost,n-1), minCost(cost,n-2));

     }

     private:
       int minCost(vector<int> cost, int n){
        if(n<0) return 0;
        if(n==0 || n==1) return cost[n];
        return cost[n]+ min(minCost(cost,n-1), minCost(cost,n-2));
       }
};

// Recursive Top Down - O(2^n) Time Limit Exceeded

int main(){
   Solution s;
   vector<int> cost = {10,15,20};

   cout <<s.minCostClimbingStairs(cost) << endl;
   return 0;
}