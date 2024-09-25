#include <vector>
#include <iostream>
using namespace std;

// Function to swap elements in an array
void swap(int &a , int &b){
    int temp = b;
    b = a;
    a  = temp;
}

// Heapify function to maintain the max heap property
void Heapify(vector<int> &hT, int i) {
    int size = hT.size();
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < size && hT[l] > hT[largest]) {
        largest = l;
    }
    if (r < size && hT[r] > hT[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(hT[i], hT[largest]);
        Heapify(hT, largest);
    }
}

// Function to insert an element in the heap
void insert(vector<int> &hT, int newNum) {
    hT.push_back(newNum);
    int index = hT.size() - 1;

    // Up-heap/bubble up
    while (index != 0 && hT[(index - 1) / 2] < hT[index]) {
        swap(hT[index], hT[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

// Function to delete an element from the heap
void deleteNode(vector<int> &hT, int num) {
    int size = hT.size();
    int i;

    for (i = 0; i < size; i++) {
        if (num == hT[i]) {
            break;
        }
    }

    // If the element was not found
    if (i == size) {
        cout << "Element not found\n";
        return;
    }

    // Swap with the last element and pop
    swap(hT[i], hT[size - 1]);
    hT.pop_back();

    // Heapify from the index of the deleted element
    Heapify(hT, i);
}

// Function to print the heap
void printArray(const vector<int> &hT) {
    for (int i = 0; i < hT.size(); ++i) {
        cout << hT[i] << " ";
    }
    cout << "\n";
}

// Driver code
int main() {
    vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);

    cout << "Max-heap-array : ";
    printArray(heapTree);

    deleteNode(heapTree, 4);

    cout << "After deleting an element : ";
    printArray(heapTree);

    return 0;
}
