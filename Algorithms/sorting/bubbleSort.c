#include <stdio.h>

int bubbleSort(int A[], int);
void display(int A[], int);
int main(){
    int terms;
    printf("\t*****Bubble sort Algorithm*****\n");
    printf("Enter the no. of terms to be sorted: ");
    scanf("%d", &terms);
    int arr[terms];
    printf("Enter the numbers for sorting:  ");
    for(int i = 0; i< terms; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, terms);
    display(arr, terms);
    return 0;
}
int bubbleSort(int A[], int n){
    for (int i = 0; i < n - 1; i++){
        int swapped = 0;
        printf("\n");
        //Bubble sort logic
        for (int j = 0; j < n-i-1; j++){
                if (A[j] > A[j+1]){
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                    swapped = 1;
                }
            }
          
        printf("Pass %d:\n", i+1);
        for (int i = 0; i < n; i++){
            printf("%d\t", A[i]);
        }
        if(!swapped)
            break;
    }
}
void display(int A[], int n){
    printf("\nThe sorted data in Ascending order: \n");
    for (int i = 0; i< n; i++){
        printf("%d\t ",A[i]);
    }
    printf("\n");
}
