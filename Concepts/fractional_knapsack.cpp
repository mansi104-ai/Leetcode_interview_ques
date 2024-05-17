#include <iostream>
#include <algorithm>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool comp(Item a , Item b){
    double r1 = (double)a.value/ (double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}

double fractionalKnapsack(int W, Item arr[],int n){
    double  curWeight =0 ;
    double finalValue = 0;
    sort(arr, arr+n, comp);

    for(int i=0; i<n;i++){
        if(curWeight+ arr[i].weight <=W){
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else{
            int remain = W - curWeight;
            finalValue += ((double)arr[i].value/ (double)arr[i].weight)*(double)remain;
            break;
        }
    }
    return finalValue;

}

int main(){
    Item items[] = {{100,30},{50,10},{60,20}};
    double finalValue = fractionalKnapsack(50,items,3);
    cout << finalValue << endl;
    return 0;
}