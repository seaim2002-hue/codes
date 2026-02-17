#include <stdio.h>
#include <stdlib.h>

void countingsort(int * arr, int n) {
    int max = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int k = max+1;
    int * count = (int*)calloc(k, sizeof(int));
    int * b = (int*)calloc(n, sizeof(int));

    for(int i=0; i<n; i++) {
        count[arr[i]]++;
    }

    for(int i=1; i<k; i++) {
        count[i] = count[i] + count[i - 1];
    }

    for(int i=n-1; i>=0; i--) {
        b[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0; i<n; i++) {
        arr[i] = b[i];
    }

    free(count);
    free(b);
}

int main () {
    int arr[] = {2,5,3,0,2,3,0,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    countingsort(arr, size); 

    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}
