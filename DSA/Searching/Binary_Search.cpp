#include <bits/stdc++.h>
using namespace std;

int binarySearch (int arr[], int n, int key) {
    int beg = 0;
    int end = n - 1;
    
    while (beg <= end) {
        int mid = (beg + end) / 2;

        if(arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            beg = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main () {
    int arr[] = {6, 10, 20, 30, 55, 75, 190};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key; 
    cin >> key;

    int index = binarySearch(arr, n, key);

    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

}
