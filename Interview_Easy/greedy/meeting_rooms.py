class Solution:

    #@param A :list of list of integers
    # @return an integer 

    def solve(self,A):
        data =[]  # tuple to store in 0,30  ,  10-15  ,20- 25 type manner

        for s,e in A:
            data.append((s,+1))  # append the start time ie data[0] at s and 1 for it to be stored
            
            data.append((e,-1))  #append the end time ie data[1] at e and -1 for it to be stored, this will be reduced from the current value

        data.sort()  # sort the tuple according to the number of start time 

        curr = 0 # this value will change according to the value of data[1]

        ans = 0  #this will store the max value that the iteration has reached till now

        for __,v in data: # __ refers that we don't need any start time info now ,  we need only the values ie +1/-1

            curr += v     # current value will increment with data[1]

            ans = max(ans, curr)  #this will return the max value that the answer has stored in all the iterations
        
        return ans