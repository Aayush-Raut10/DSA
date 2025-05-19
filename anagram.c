/*
    C program to check anagram 
*/
#include <stdio.h>
  void sort(char arr[]){
      int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    }
    void display(char arr[]){
        for(int k = 0; k<5; k++){
            printf("%c ",arr[k]);
        }
        printf("\n");
    }

int main() {
    int i,j,check=0;
    char arr1[5] = {'H', 'E', 'A', 'R', 'T'};
    char arr2[5] = {'E', 'A', 'R', 'T', 'H'};
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
