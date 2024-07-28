#include <iostream>
using namespace std;


class Solution{ // class is a building block of OOPS , contains the data members and their methods
    public:

    string name;  // the method of the class 
};

int main(){

    Solution student1;

    student1.name = "Krishna";
    cout << "student1 name:" <<student1.name;
    return 0;

}