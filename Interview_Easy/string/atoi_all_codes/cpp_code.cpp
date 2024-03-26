//Initial code
// #include <iostream>

// using namespace std;

// class Solution{
//     public:
//       int myAtoi(string s){
//         // char WhiteSpace = " \t\v\r\n";
//         // size_t start= s.find_first_not_of(WhiteSpace);
//         // size_t end = s.find_last_not_of(WhiteSpace);
//         // s = s.substr(start, end-start+1);
//         if(s.empty()){
//             return 0;
//         }
//         for(int i=0;i<s.length();i++){
//             int sign = 1;
//             if (s[i] == "-"){
//                 i++;
//                 sign = -1;
//             }
//             else if(s[i] =="+"){
//                 i++;
//             }

//             int parsed = 0;
//             char curr = s[i];
//             while(curr - '0'== curr){
//                 parsed = parsed *10 + curr - '0';
                
//             }
//             parsed *= sign;
//             double base = 2;
//             double exponent= 31;
//             double result = pow(base,exponent);
//             if (parsed > (result-1)){
//                 return result;
//             }
//             else if(parsed < -1*result){
//                 return -1*result;
//             }
//             else{
//                 return parsed;
//             }
//         }
//       }
// };

// int main(){

//     string s = "This is to check -84848";

//     Solution m;
//     int parsed = m.myAtoi(s);
//     cout << "The int part in the string is :" << parsed <<endl;

//     return 0;
// }

//---------------------------------------------------------

//Corrected_code

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        if (s.empty()) {
            return 0;
        }
        
        int i = 0;
        int sign = 1;
        long long result = 0; // Use long long to handle overflow
        
        // Step 1: Ignore leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        
        // Step 2: Check for sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        
        // Step 3: Read digits until non-digit character or end of input
        while (i < s.length()) {

            if(!isdigit(s[i])){
                i++;
            }
            else{
                result = result * 10 + (s[i] - '0');
            }
            // Step 5: Check for overflow
            if (result * sign < INT_MIN) {
                return INT_MIN;
            } else if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            i++;
        }
        
        // Step 4: Apply sign
        result *= sign;
        
        return result;
    }
};

int main() {
    string s = "This is -84848";

    Solution m;
    int parsed = m.myAtoi(s);
    cout << "The int part in the string is :" << parsed << endl;

    return 0;
}

