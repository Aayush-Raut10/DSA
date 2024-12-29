/*
    This C program to read elements of array from user
*/

#include<stdio.h>

int main(){

    int arr[4]; //array of integer with size 4
    int i;

    //Reading elements of array
    for(i=0; i<4; i++){
        printf("Enter arr[%d] = ",i);
        scanf("%d",&arr[i]);

    }
    


    printf("\n");
    return 0;
}
