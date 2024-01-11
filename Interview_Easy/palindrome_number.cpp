#include <bits/stdc++.h> 
using namespace std;
bool reverseDigits(int num){
    int originalNum = num; // To store the original number for later comparison
    int rev_num = 0;
    while(num>0){
        rev_num = rev_num*10 + num%10;
        num = num/10;
        
        };
    return (originalNum == rev_num); // instead of num, check with original_Num , since it is unchanged in the code
    };



int main(){
    int num;
    cin>> num;
    //cout << reverseDigits(num); if you take this line , then it returns o or 1
    // for proper output:

    if (reverseDigits(num)){
        cout << num << " is a palindrome."<< endl;
    }
    else{
        cout << num<< " is not a palindrome."<< endl;
    }
    
    return 0;
}