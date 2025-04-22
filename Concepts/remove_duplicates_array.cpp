#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> inp = {1,2,3,4,5};
    
    // Remove the element at index 2
    auto last = unique(inp.begin(), inp.end());
    inp.erase(last, inp.end());
}