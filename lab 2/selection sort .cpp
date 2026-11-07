#include <iostream>
using namespace std;

#define max 5

// Function to display the array elements
void display(int a[]) {
    for (int i = 0; i < max; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to perform Selection Sort
void selection_sort(int a[]) {
    for (int i = 0; i < max - 1; i++) {
        for (int j = i + 1; j < max; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main() {
    int arr[max];

    // Taking input from the user
    cout << "Enter " << max << " numbers:\n";
    for (int i = 0; i < max; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    display(arr);

    selection_sort(arr);

    cout << "Sorted array: ";
    display(arr);

    return 0;
}
