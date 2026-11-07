#include <iostream>
using namespace std;

#define max 5

// Function to print the array
void display(int a[]) {
    for (int i = 0; i < max; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to perform Bubble Sort
void Bs(int a[]) {
    for (int i = 0; i < max - 1; i++) {
        for (int j = 0; j < max - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swapping elements
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main() {
    // Initializing an unsorted array of size 5
    int a[max] = {64, 34, 25, 12, 22};

    cout << "Original array: ";
    display(a);

    // Sorting the array
    Bs(a);

    cout << "Sorted array:   ";
    display(a);

    return 0;
}


       
