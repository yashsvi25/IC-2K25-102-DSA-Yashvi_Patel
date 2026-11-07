#include <iostream>
using namespace std;


int partition(int ll, int ul) {
    int start = ll;
    int end = ul;
    int pivot = a[ll];
    
    while (start < end) {
        
        while (a[start] <= pivot) {
            start++;
        }
        
        while (a[end] > pivot) {
            end--;
        }
       
        if (start < end) {
            int t = a[start];
            a[start] = a[end];
            a[end] = t;
        }
    }
    
   
    int t = a[ll];
    a[ll] = a[end];
    a[end] = t;
    
    return end; // Return the partition index
}


void QuickSort(int ll, int ul) {
    int loc;
    if (ll < ul) {
        loc = partition(ll, ul);      // Find pivot location
        QuickSort(ll, loc - 1);       // Sort left subarray
        QuickSort(loc + 1, ul);       // Sort right subarray
    }
}

int main() {
    int n;
    cout << "Enter total element: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Call QuickSort from index 0 to n-1
    QuickSort(0, n - 1);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
