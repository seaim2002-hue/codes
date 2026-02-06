#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int len) {
    int temp;
    for(int i=0; i<len-1; i++) {
        for(int j=0; j<len-1-i; j++) {
            if(arr[j + 1] < arr[j]) {
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

int main () {
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 36};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    bubblesort(arr, len);

    for(auto x : arr) {
        cout << x << " ";
    }

    return 0;
}
