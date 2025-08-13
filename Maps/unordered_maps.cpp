#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    // Creating an unordered_map with integer
    // keys and string values
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};

    for (auto i : um) 
        cout << i.first << ": " << i.second
        << endl;
    return 0;
}