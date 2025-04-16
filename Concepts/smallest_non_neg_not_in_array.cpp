#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void removeDuplicates(vector<int> &a,int n){
    int k=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            a[k]=a[i];
            k++;
        }
    }
    a[k]=a[n-1];
    
}
int main(){
    vector<int> a{1,2,1,2,3,4,5,6,4,4,5,5};
    removeDuplicates(a,a.size());
    return 0;
    
}