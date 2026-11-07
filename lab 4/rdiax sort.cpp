#include<iostream.h>
define max 51

void radixSort(int a[], int max) {
    int i, pass = 1, m;
    int b[max];
    int bucket[10];
    
    m = a[0];
    for (i = 0; i < max; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    
    for (int pos = 1; m / pos > 0; pos *= 10) {
        for (i = 0; i < 10; i++) {
            bucket[i] = 0;
        }
        
        for (i = 0; i < max; i++) {
            bucket[(a[i] / pos) % 10]++;
        }
        
        for (i = 1; i < 10; i++) {
            bucket[i] = bucket[i] + bucket[i - 1];
        }
        
        for (i = max - 1; i >= 0; i--) {
            b[--bucket[(a[i] / pos) % 10]] = a[i];
        }
        
        for (i = 0; i < max; i++) {
            a[i] = b[i];
        }
    }
}
