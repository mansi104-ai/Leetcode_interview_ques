#include <stdio.h>
using namespace std;

int main() {
    int i = 5;

    // Pre-increment: Increment i first, then use the updated value
    printf("Using pre-increment: %d\n", ++i);  // Output: 6
    printf("Value of i after pre-increment: %d\n", i);  // Output: 6

    i = 5;  // Resetting the value of i for the next example

    // Post-increment: Use the current value of i, then increment i
    printf("Using post-increment: %d\n", i++);  // Output: 5
    printf("Value of i after post-increment: %d\n", i);  // Output: 6

    return 0;
}
