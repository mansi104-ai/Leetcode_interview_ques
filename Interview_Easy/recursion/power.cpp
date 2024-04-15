#include <iostream>
using namespace std;

int power(int base, int n){
    if(n==0){
        return 1;
    }
    return base* power(base, n-1);
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<=n;i++){
        int result = power(2,i);
        cout << result << "\n";
    }
    cout << endl;
    return 0;

}