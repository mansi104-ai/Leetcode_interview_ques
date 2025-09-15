#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Function to maintain the heap property for a subtree rooted at index 'i'
//'n' is the size of the heap

void Heapify(vector<int> &arr,int n,int i){
  int largest = i;
  int left = 2*i +1;
  int right = 2*i+2;

  //Check if the right child is greater than the parent of the tree
  if(left < n && arr[left]> arr[largest]){
    largest = left;
  }

  //Check if the right child is greater than the parent of the tree
  if(right < n && arr[right] > arr[largest]){
    largest = right;
  }

  //If the largest element is not equal to the current node, swap and heapify the affected subtre
  if(largest != i){
    swap(arr[i],arr[largest]);
    Heapify(arr,n,largest);
  }
}

//Main function to perform heap sort
void HeapSort(vector<int> &arr){
  int n = arr.size();
  //Step 1 : Build a max heap from the input array
  for(int i = n/2-1;i >= 0;i--){ // Start from the last non-leaf node
    Heapify(arr,n,i);

  }

  //Step 2 : Extract elements from the heap one by one
  for(int i = n-1;i>0;i--){
    swap(arr[0],arr[i]);
    Heapify(arr,i,0);
  }
}

int main(){
  vector<int> arr = {10,5,20,2,14};
  HeapSort(arr);
  cout  << "Sorted Array: ";
  for(int val : arr)cout << val << " ";
  cout <<endl;
  return 0;
}