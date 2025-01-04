/*
    C program for finding largest element in an array

*/

#include<stdio.h>

int main(){

    int size,i;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];

    //Taking input for elements of array
    for(i=0; i<size; i++){
        printf("Enter arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];

    for(i=0; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    
    printf("\nLargest element of an array = %d\n",largest);







    return 0;
}
