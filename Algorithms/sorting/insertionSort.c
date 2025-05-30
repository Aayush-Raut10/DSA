#include <stdio.h>

void displayArray(int arr[], int n) {
    // Loop through the array and print each element
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    
    // Step 2: Iterate through the remaining unsorted elements
    for (i = 1; i < n; i++) {
        key = arr[i];    // Step 3: Pick the current element
        
        j = i - 1;
        
        // Step 4: Compare and shift elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j = j - 1;
        }
        
        // Step 5: Insert the key at its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input from the user for the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array before sorting
    printf("Array before Insertion Sort: ");
    displayArray(arr, n);

    // Perform Insertion Sort
    insertionSort(arr, n);

    // Display the array after sorting
    printf("Array after Insertion Sort: ");
    displayArray(arr, n);
    
    return 0;
}

