#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key) {
    int i=0;
    while (i<n) {
        if(arr[i] == key){
            return i;
        }
        i++;
    }
    return -1;
}

int main () {
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int index = linearsearch(arr, n, key);
    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
