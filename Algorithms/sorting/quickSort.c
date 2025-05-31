#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


// function to find the partition position
int partition(int array[], int low, int high) {
 
  int pivot = array[high]; // select the rightmost element as pivot
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  
  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  return (i + 1); // return the partition point
}


void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1); // recursive call on the left of pivot
    quickSort(arr, pi + 1, high); // recursive call on the right of pivot
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  
  printf("\n");
  
}

int main() {
  
  int array[] = {15,-2,25,0,5};
  int n = sizeof(array) / sizeof(array[0]);
  
  printf("Unsorted Array\n");
  printArray(array, n);
  
  quickSort(array, 0, n - 1);  // perform quicksort 
  
  printf("Sorted array in ascending order: \n");
  printArray(array, n);
  
  return 0;
  
}
