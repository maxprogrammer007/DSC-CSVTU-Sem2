#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        } 
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Target not found
    return -1;
}

int main() {
    int array[] = {2, 4, 5, 7, 9, 12, 14};
    int target = 9;
    int size = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, 0, size - 1, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    return 0;
}
