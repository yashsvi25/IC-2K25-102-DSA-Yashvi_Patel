#include <iostream>
using namespace std;

void merge(int a[], int s, int mid, int e) {
    int i, j, k;
    int a1 = mid - s + 1;
    int b = e - mid;
    
    int left_arr[a1];
    int right_arr[b];
    
    for (int i = 0; i < a1; i++) {
        left_arr[i] = a[s + i];
    }
    for (int j = 0; j < b; j++) {
        right_arr[j] = a[mid + 1 + j];
    }
    
    i = 0; 
    j = 0; 
    k = s;
    
    while (i < a1 && j < b) {
        if (left_arr[i] <= right_arr[j]) {
            a[k] = left_arr[i];
            i++;
        } else {
            a[k] = right_arr[j];
            j++;
        }
        k++;
    }
    
    while (i < a1) {
        a[k] = left_arr[i];
        i++;
        k++;
    }
    
    while (j < b) {
        a[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);
    merge(a, s, mid, e);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    merge_sort(a, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
