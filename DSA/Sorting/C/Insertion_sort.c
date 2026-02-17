#include <stdio.h>

void insertionsort(int arr[], int n) {
    int temp;
    for(int i=1; i<n; i++) {
        temp = arr[i];
        int j=i-1;

        while(j>=0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main () {
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 36};
    int len = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, len);

    for(int i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }
}
