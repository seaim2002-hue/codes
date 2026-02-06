#include <stdio.h>

int linearsearch (int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main () {
    int arr[] = {6, 10, 20, 30, 55, 75, 190};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int index = linearsearch(arr, n, key);
    if(index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found.\n");
    }
}
