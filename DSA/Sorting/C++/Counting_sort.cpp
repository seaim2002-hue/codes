#include <bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n) {
    int i, j;

    // find max element
    int max = arr[0];
    for(i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // size of count array
    int k = max + 1;

    // used calloc to creat the count array and initialize the elements to "0" at
    // the time of creation
    int * c = (int*)calloc(k, sizeof(int));

    //new array
    int * B = new int[n];

    for(j=0; j<n; j++) {
        // c[arr[j]] = c[arr[j]] + 1;
        c[arr[j]]++;
    }

    // prefix sum
    for(i=1; i<k; i++) {
        c[i] = c[i] + c[i-1];
    }

    for(j=n-1; j>=0; j--) {
        B[c[arr[j]] - 1] = arr[j];
        //c[arr[j]] = c[arr[j]] - 1;
        c[arr[j]]--;
    }

    // copy into the original array
    for(i=0; i<n; i++) {
        arr[i] = B[i];
    }

    // returning the used memory to OS
    free(c);
    delete[] B;
}

int main() {
    int arr[] = {2,5,3,0,2,3,0,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    countsort(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
