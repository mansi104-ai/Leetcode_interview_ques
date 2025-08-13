#include <iostream>
#include <map>
using namespace std;

struct comp {
    bool operator()(const int& a, const int& b) const {
        return a > b; // Descending order
    }
};



int main(){
  map<int,int,comp> mp;
  
}
