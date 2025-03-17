#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n ,i,j;
    // unordered_map<int,int> mp;
    std::cin >> n;
    vector<int> arr(n,0);
    vector<int> arr2(n,0);
    for (int k = 0;k<n;k++){
        std::cin >>i>>j;
        arr[k]=i;
        arr2[k]=j;
    }
    int cnt = 0;
    for(int a =0;a<arr.size();a++){
        for(int b=1;b<n;b++){
            if(arr[a] == arr2[b] ){
                cnt++; 
            }else{
                continue;
            }
            b++;
        }
        
    }
    std::cout << cnt << std::endl;


}