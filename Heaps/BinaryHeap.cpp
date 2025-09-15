#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class BinaryHeap{
  public:
  //Maximum number of elements that can be stored in  a heap
  int capacity;
  //Current numner od elements in the heap
  int size;

  //Array for storing the keys
  int* arr;
  BinaryHeap(int cap){
    //Assigning the capactiy
    capacity = cap;

    //Initial size set to 0
    size= 0;

    //Creating an array
    arr = new int[capacity];

  }
  int parent(int i){
    return (i-1)/2;
  }
  int left(int i){
    return 2*i +1;
  }
  int right(int i){
    return 2*i +2;
  }

  void Insert(int x){
    if(size==capacity){
      cout << "Binary Heap Overflow"<<endl;
      return ;
    }
    //Insert the new element at the end
    arr[size]= x;

    //Store the index for check heap property
    int k = size;

    //Increase the size
    size++;
    //Fix the min heap property
    while(k!= 0 && arr[parent(k)]>arr[k]){
      swap(&arr[parent(k)],&arr[k]);
    }
  }

  void Heapify(int ind){
    //Right child
    int ri = right(ind);
    //Left child
    int li = left(ind);

    //Initially assume viola value is minimum
    int smallest = ind;
    if(li < size && arr[li] <arr[smallest]){
      smallest = li;
    }
   
    if(ri < size && arr[ri] <arr[smallest]){
      smallest = ri;
    }

    //If the minimum among the three nodes is not the parent itself 
    //then swap and call heapify respectivley
    if(smallest != ind){
      swap(&arr[ind] , &arr[smallest]);
      Heapify(smallest);
    }
  }

  int getMin(){
    return arr[0];
  }

  int ExtractMin(){
    if(size <= 0){
      return INT_MAX;
    }
    if(size == 1){
      size--;
      return arr[0];
    }

    int mini = arr[0];

    //Copy the last node value to root node
    arr[0] = arr[size-1];

    size--;

    //Call heapify on the root node
    Heapify(0);
    return mini;
  }

  void DecreaseKey(int i,int val){
    //Updating the new value
    arr[i] = val;

    //Fixing the min heap

    while(i!= 0 && arr[parent(i)] >arr[i]){
      swap(&arr[parent(i)],&arr[i]);
      i = parent(i);
    }
  }

  void Delete(int i){
    DecreaseKey(i,INT_MIN);
    ExtractMin();
  }

  void swap(int*x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
  }

  void print(){
    for(int i =0;i<size;i++){
      cout << arr[i] <<" ";

    }
    cout <<endl;
  }
};

int main(){
  BinaryHeap h(20);
  h.Insert(4);
  h.Insert(1);
  h.Insert(2);
  h.Insert(6);
  h.Insert(3);
  h.Insert(2);

  cout << "The min value is : "<<h.getMin() <<endl;

  h.Insert(-1);
  cout << "The min value is :"<<h.getMin()<<endl;

  h.ExtractMin();
  h.DecreaseKey(3, -2);
  cout << "Min value is " << h.getMin() << endl;

  h.Delete(0);
  cout << "Min value is " << h.getMin() << endl;

  return 0;
}

//Important concepts and questions : https://medium.com/@RobuRishabh/heap-data-structure-and-priority-queue-in-c-d2fe7a569c86