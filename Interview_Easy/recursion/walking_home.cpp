#include <iostream>
using namespace std;

void reachHome(int src, int dest){

    //base case
    if(src == dest){
        cout << "reached" << endl;
        return;
    }
    // cout << "reached" << endl;
    src++;
    reachHome(src, dest);
}


int main(){
    int src =1;
    int dest =10;

    cout << endl;
    reachHome(src, dest);

    return 0;
}