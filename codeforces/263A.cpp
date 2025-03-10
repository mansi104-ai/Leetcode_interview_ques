#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int c = 0;
    for(int row = 1;row <= 5;row++){
        for(int col = 1;col <= 5;col++){
            cin >> c;
            if(c == 1){
                cout << abs(row-3) + abs(col-3) << endl; 
            }
        }

    }
    return 0;
}