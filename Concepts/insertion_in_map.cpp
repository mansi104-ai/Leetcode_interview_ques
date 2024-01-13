#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mp;

    mp.insert({1,20});
    mp.insert({2,30});
    mp.insert({3,40});

    cout << "KEY\tELEMENT\n";
    for(auto itr = mp.begin();itr!= mp.end();itr++){
        cout << itr-> first<<"\t"<<itr-> second<<'\n';
    }
    return 0;
}