// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int sumSubarrayMins(vector<int>& arr) {
//         int n = arr.size();
//         int answer = 0;
//         stack<int> st,st2,s;
//         for(char t : arr){
//             st.push(t);
//             answer+= t;
//         }

        
//             // if(st2.empty()){
//             //     st2.push(min(arr[i],arr[n-1]));
//             // }
//             while(!st.empty()){
//               if(st2.empty()){
//                 st2.push(min(arr[n-2],arr[n-1]));
//             }
//               for(int i = st.size()-2;i>= 0;--i){
//                 if(arr[i] < st2.top()){
//                     st2.push(arr[i]);
//                     answer+= arr[i];
//                     cout << st2.top() <<endl;
//                 }else{
//                     st2.push(st2.top());
//                     answer+= st2.top();
//                     cout << st.top()<<endl;
//                 }
//               }
//             st.pop();
//             st2.swap(s);

            
//         }
        
//         return answer;

//       }
// int main(){
//   vector<int> arr = {11,81,94,43,3};
//   int solution  = sumSubarrayMins(arr);
//   cout << "The solution is "<<solution<<endl;
//   return 0;
// }

/*Wrong approach - above , because we cannot count the number once the series changes on for loop*/

/*Correct approach - using pre and nse , previous smallest element and next smallest element and taking the mode of the values as a sum*/