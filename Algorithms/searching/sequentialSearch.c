#include <stdio.h>
// Function prototypes
int sequentialSearch(int arr[], int size, int target);
void displayArray(int arr[], int size);
int main() {
    int arr[] = {3, 1, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayArray(arr, size);   // Print the array
    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);
    int result = sequentialSearch(arr, size, target);   // Perform sequential search
    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }
    return 0;
}
int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Target found
        }
    }
    return -1;  // Target not found
}
void displayArray(int arr[], int size) {
    printf("Array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

