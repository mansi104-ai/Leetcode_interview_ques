#include <iostream>
#include <string>
using namespace std;

//Function to find the outermost parentheses in format (A + B) or (A) or ()

// String input = (())(()(()))
// (())
//Function to count the left opening brackets
int countLeft(string s){
  int leftCount =  0;
  for(int i =0;i<s.length();i++){
    if(s[i] == '('){
      leftCount++;
    }
  }
  return leftCount;
}

//Function to count the right opening brackets
int countRight(string s){
  int rightCount = 0;
  for(int i =0;i<s.length();i++){
    if(s[i] == ')'){
      rightCount++;
    }
  }
  return rightCount;
}

//Function to modify the final string for the output
string FinalString(string s){
  string output;
  int leftCount , rightCount = 0;
  int i=0;
  int n = s.length();

  while(i<s.length()){
    if(s[i] == '('){
      leftCount++;
    }
    if(s[i] == ')'){
      rightCount++;
    }
    
    if(leftCount > rightCount){
      //lefCount at (i = 2) = 2 and rightCount = 1  -> remove the substring and add the the final string 
      //Add () and not the outer ( left bracket, then reduce the leftCount to 0 and rightCount to 0
      //At next element , rightCount = 1 and leftCount = 0 ->closing bracket = 1 and opening bracket = 0


      //At substring = (()((
      //))) -> ()(()) -> As soon as the leftCount > rightCount 
      //(()) , as soon as the rightCount  == leftCount, push 1 opening bracket and 1 closing bracket to the final string 
      //Then i goes to 

    }
    if(leftCount > rightCount || leftCount < rightCount){

    }
  }
}

int main(){
  string s;
  cin >> s;
  int CL , CR = 0;
  CL = countLeft(s);
  CR = countRight(s);
  cout << "The left opening brackets are : "<<CL <<endl;
  cout << "The right opening brackets are : "<<CR << endl;
  return 0;

}