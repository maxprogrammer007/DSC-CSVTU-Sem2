#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}

int main() {
    int array[] = {2, 4, 5, 7, 9, 12, 14};
    int target = 9;
    int size = sizeof(array) / sizeof(array[0]);
    int result = linearSearch(array, size, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    return 0;
}
