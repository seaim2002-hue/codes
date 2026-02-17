#include <stdio.h>

void selectionsort(int arr[], int n) {
    int temp;
    for(int i=0; i<n-1; i++) {
        int minIndex = i;

        for(int j=i+1; j<n; j++) {
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main () {
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 36};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionsort(arr, len);

    for(int i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }
}
