#include <iostream>
using namespace std;

#define MAX 14
#define Step 3
#define Size ((MAX + Step - 1) / Step)

class is {
    int arr[MAX];
public:
    void get();
    void search(int k);
};

// Function to accept sorted data from the user
void is::get() {
    cout << "Enter " << MAX << " elements in sorted order:\n";
    for (int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }
}

// Index Sequential Search implementation from the handwritten notes
void is::search(int k) {
    int element[Size];
    int indices[Size];
    int i;
    int j = 0;
    int ind = 0;
    int start = 0;
    int end = MAX;
    int f = 0; // Flag to track if element is found

    // Creating the index set (elements and their starting indices)
    for (i = 0; i < MAX; i += Step) {
        element[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }

    // If the target element is smaller than the very first element in the index
    if (k < element[0]) {
        cout << "data not found" << endl;
    } 
    else {
        // Find the block/range where the key could reside
        for (i = 1; i < ind; i++) {
            if (k < element[i]) {
                start = indices[i - 1];
                end = indices[i];
                break;
            }
        }
        
        // If it's beyond the last indexed element
        if (i == ind) {
            start = indices[ind - 1];
            end = MAX;
        }

        // Sequential search within the identified block
        for (j = start; j < end; j++) {
            if (k == arr[j]) {
                f = 1;
                break;
            }
        }

        // Output results
        if (f == 1) {
            cout << "data found at index " << j << endl;
        } else {
            cout << "data not found" << endl;
        }
    }
}

int main() {
    is obj;
    obj.get();

    int search_key;
    cout << "Enter element to search: ";
    cin >> search_key;

    obj.search(search_key);
    return 0;
}
