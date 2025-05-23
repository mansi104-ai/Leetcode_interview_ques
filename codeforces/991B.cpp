#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n ;
    cin >> n;
    vector<int> inp(n);
    int curr_sum = 0;
    for(int i=0;i<n;i++){
        cin >> inp[i];
        curr_sum += inp[i];
    }

    if(curr_sum / n >= 4.5){
        cout << 0 <<endl;
        return 0;
    }
    int min_work = 4.5 * n;
    


return 0;
}