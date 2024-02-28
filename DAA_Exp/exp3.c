#include <stdio.h>

// Binary Search function
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate middle index

        if (arr[mid] == target) {
            return mid; // Element found at mid index
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {12, 32, 42, 62, 78, 83, 98}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int target = 78; // Element to search

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
