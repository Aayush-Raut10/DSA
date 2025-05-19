/*
    C program to check anagram 
*/
#include <stdio.h>
  void sort(int arr[]){
      int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    }
    void display(int arr[]){
        for(int k = 0; k<5; k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }

int main() {
    int i,j,check=0;
    int arr1[5] = {1, 20, 50, 6, 48};
    int arr2[5] = {1, 50, 48, 20, 6};
     sort(arr1);
     sort(arr2);
     display(arr1);
     display(arr2);
     for(i=0;i<5;i++){
         if(arr1[i] != arr2[i]){
             check=1;
             break;
     }
     }
     if(check==0){
         printf("Anagram\n");
     }
     else{
         printf("Not anagram\n");
     }
    
    return 0;
}
