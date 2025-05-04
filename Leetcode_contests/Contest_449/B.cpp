#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<vector<int>> specialGrid(int N) {
            int power_s = pow(2,N);
            vector<vector<int>> outp(power_s,vector<int>(power_s,0));
            
            for(int i =1;i<=power_s;i++){
                for(int j =1;j<=power_s;j++){
                    
                    outp[i][j] = pow(2,2*N)-i;
                    outp[i+1][j] = outp[i][j] -1 ;
                    outp[i+1][j+1] =outp[i+1][j] -1;
                    outp[i][j+1] = outp[i+1][j+1] -1;

                }
            }

            return outp;
        }
    }