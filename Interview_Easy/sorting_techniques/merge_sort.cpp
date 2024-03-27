#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;

        while (left<=mid && right<= high)
        {
            /* code */
            if (arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }

        }

        // if the elements on the last half are still left
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right<= high){
            temp.push_back(arr[right]);
            right++;
        }

        //transferring all the elements from temporary to arr
        for(int i=low;i<= high;i++){
            arr[i]= temp[i-low];
        }
        

       }


void mergeSort(vector<int> &arr,int low,int high ){
    if(low>=high)return;
    int mid= (low+high)/2;
    mergeSort(arr,low,mid);    //left half
    mergeSort(arr,mid+1,high);  //right half
    merge(arr,low,mid,high); //merging sorted halves
}

int main(){

    vector<int> arr={8,3,5,5,3,5};
    int n=6;

    cout<< "Sorted array"<< endl;
    for(int i =0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    mergeSort(arr,0,n-1);
    cout << "Afterb sorting array: "<<endl;
    for(int i=0;i<n;++i){
        cout << arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}