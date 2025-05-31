#include <stdio.h>
void selectionSort(int array[], int size) {
   int i, j, imin;
   for(i = 0; i < size - 1; i++) {
      imin = i; // Get index of minimum element
      for(j = i + 1; j < size; j++) {
         if(array[j] < array[imin]) {
            imin = j; // Update the index of the minimum element
         }
      }
      if (imin != i) { // Swap only if necessary
         int temp = array[i];
         array[i] = array[imin];
         array[imin] = temp;
      }
   }
}
int main() {
   int n;
   printf("Enter the size of array: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the elements of the array:\n");
   for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   printf("\nArray before Sorting: ");
   for(int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   selectionSort(arr, n);
   printf("Array after Sorting: ");
   for(int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}

