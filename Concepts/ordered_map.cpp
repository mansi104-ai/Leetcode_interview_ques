#include <bits/stdc++.h>

int main()
{

    std:: map<int,int>order;

    //Mapping values to keys
    order[5]=10;
    order[3]=500;
    order[20]=100;
    order[1]=1;

    //iterating the map
    //printing ordered values
    for (auto i = order.begin();i!= order.end(); i++){
        std:: cout << i-> first<< " : "<<i->second <<"\n";

    }

}