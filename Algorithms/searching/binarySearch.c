#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;  // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        }
        else {
            right = mid - 1;  // Search in the left half
        }
    }
    return -1;  // Target not found
}
void printArray(int arr[], int size) {
    printf("Array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Print the array
    printArray(arr, size);
    // Get target input from user
    int target;
    printf("Enter the target : ");
    scanf("%d", &target);
    // Perform binary search
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Target found at index: %d\n", result);
    } else {
        printf("Target not found\n");
    }
    return 0;
}

