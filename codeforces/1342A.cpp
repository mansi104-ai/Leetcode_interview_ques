#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long x,y,a,b;
        cin >> x >> y ;
        cin >> a >> b;

        if(x > y){
            swap(x,y);
        }
        long long int ans1 = 0, ans2 = 0;
        ans1 = x*a + y*a;
        long long int z = y - x;
        ans2 = z*a + x * b;

        cout<<min(ans1,ans2)<<endl;

    }
    cout << endl;
    return 0;
}