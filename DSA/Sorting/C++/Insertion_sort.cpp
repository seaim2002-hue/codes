#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

/*
//using while loop.
void insertionsort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
*/

int main () {
    int arr[] = {4,50,45,62,1,9,7,5,14};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr, size);

    for(auto x : arr) {
        cout << x << " ";
    }

    return 0;
}
