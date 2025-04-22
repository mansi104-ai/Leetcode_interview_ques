#include <iostream>
using namespace std;

int main(){
    int y;
    cin >> y;
    while (true)
    {
        /* code */
        y+= 1;
        int a  = y/1000;
        int b = y/100 % 10;
        int c = y /10 % 10;
        int d = y % 10;

        if( a!= b  && b!= c && c!= d && a!=d & a!= c && b!= d){
            break;
        }
    }
    cout << y << endl;
    return 0;
    
}