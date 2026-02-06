#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int len) {
    int temp;
    for(int i=0; i<len-1; i++) {
        int minIndex = i;

        for(int j=i+1; j<len; j++) {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        // swaping element manually
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        
        // swap(arr[minIndex], arr[i]);
    }
}

int main () {
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 36};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionsort(arr, len);

    for(auto x : arr) {
        cout << x << " ";
    }
}
