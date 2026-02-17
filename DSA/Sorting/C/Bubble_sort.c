#include <stdio.h>

void bubblesort(int arr[], int n) {
    int temp = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j + 1] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main () {
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 36};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, size);

    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
