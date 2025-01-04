/*
    C program for finding smallest element in an array

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

    int smallest = arr[0];

    for(i=0; i<size; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    
    printf("\nSmallest element of array = %d\n",smallest);







    return 0;
}