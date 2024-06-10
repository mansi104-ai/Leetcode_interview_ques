#include <iostream>
#include <vector>
using namespace std;

int f(int day ,int last, vector<vector<int>> &points,vector<vector<int>> &dp){
    int maxi =0;
    if(day == 0){
        for(int task =0 ;task <3;task++){
            if(task!= last){
                maxi = max(maxi,points[0][task]);

            }
        }
        return maxi;
    }

    for(int task = 0;task <3 ;task++){
        if(task!= last){
            int point = points[day][task] + f(day-1,task,points,dp);
            maxi = max(maxi,point);
        }
    }
    return maxi;
}

int ninjaTraining(int n,vector<vector<int>> &points){
    vector<vector<int>> dp(n,vector<int> (4,-1));
    return f(n-1,3,points,dp);

}

int main(){
    int n =3;
    vector<vector<int>> points = {{1,4,5},{5,6,7},{3,3,3}};
    cout << ninjaTraining(n,points) << endl;
}