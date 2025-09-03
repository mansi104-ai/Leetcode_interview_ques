#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fullJustify(vector<string> &words,int maxWidth){
  vector<string> result;
  int n = words.size();
  int i = 0;

  while(i < n){
    int j = i;
    int lineLength = 0;

    //Greedily take as many words as it fits in maxWidth
    while(j < n && lineLength + words[j].size()+ (j-i) <= maxWidth){
      lineLength += words[j].size();
      j++;
    }

    int numWords = j-i;
    int totalSpaces =  maxWidth - lineLength;
    string line = "";
  }
}