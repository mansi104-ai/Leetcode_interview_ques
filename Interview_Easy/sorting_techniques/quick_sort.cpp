#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j= high;
    
    while(i<j){

        //check 1:
        while(arr[i] <= pivot && i<= high-1){
            i++;
        }

        //check 2:
        while(arr[j] > pivot && j>= low+1){
            j--;
        }

        if(i<j) swap(arr[i],arr[j]);

    }
    swap(arr[low],arr[j]);
    return j;

}

void sort(vector<int> &arr, int low,int high){
    if(low<high){
        int pIndex = partition(arr, low ,high);
        sort(arr, low, pIndex -1);
        sort(arr, pIndex + 1, high);

    }

}

vector<int> quickSort(vector<int> arr){
    sort(arr,0,arr.size()-1);
    return arr;
}

int main(){
    vector<int> arr = {4,5,6,7,8,22,45};
    int n= arr.size();
    cout << "Before using quick sort: "<< endl;

    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";

    }

    cout<< endl;

    arr = quickSort(arr);
    cout << "After using quick sort: "<< "\n";
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";

    }
    cout << "\n";
    return 0;
}