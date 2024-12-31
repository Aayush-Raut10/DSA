#include<stdio.h>
#define n 5

int main(){

    int arr[n],i;

    //Taking elements of array as input from user 
    for(i=0; i<n; i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int target,index;

    printf("Enter the target : ");
    scanf("%d",&target);

    //Search for target elements in an array
    for(i=0; i<n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }

    printf("Index of targeted element = %d\n",index);
   


    return 0;
}

