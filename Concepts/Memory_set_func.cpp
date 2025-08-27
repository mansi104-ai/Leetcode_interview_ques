#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

// int main(){
//   char str[5];
//   memset(str,'t',sizeof(str));
//   cout << str;
//   return 0;
// }

// int main(){
//   char str[] = "geeksforgeeks";

//   //setting each byte of memory 
//   //of str to 't' using memset

//   memset(str,'t',sizeof(str));
//   cout << str;
//   return 0;
// }

/*This returns : tttttttttttttt�yk� because 
cout << str expects a null-terminated char array i.e '\0' at the end 
Since there is no '\0' , cout keeps reading memory beyond your array until it accidently hits a '\0'somewhere
*/

/*Improved way to write the code*/

// int main(){
//   char str[6]; //5 't' + 1 '\0'
//   memset(str,'t',5); //Fill first 5 with 't'
//   str[5] = '\0';  // Add null terminator
//   cout << str;    //Prints : ttttt
//   return 0;
// }


//For the second function

int main(){
  char str[] = "geeksforgeeks";
  int n = sizeof(str);
  //setting each byte of memory
  //of str to 't' using memset
  memset(str,'t',sizeof(str));
  str[n-1] = '\0';
  cout << "geeksforgeeks" << " ";
  cout << "The initial length is: "<<strlen("geeksforgeeks") <<endl;
  cout << str <<endl;

  cout << "The final length is: "<<strlen(str);
  return 0;
}