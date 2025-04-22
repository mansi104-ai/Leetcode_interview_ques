class Solution {
    public:
        long long calculateScore(vector<string>& instructions, vector<int>& values) {
    
            int n = instructions.size();
            vector<bool> visited(n,false);
            long long curr_score = 0;
            int i=0;
            while(instructions){
                if(instructions[i] == "add"){
                    curr_score += values[i];
                    visited[i] = true;
                    
                    i++;
                }
    
                else{
                    i += i + values[i];
                    visited[i] = true;
                }
            }
    
            return curr_score;
        }
    };