/*
    This program demonstrates the sum of elements of an array
    (Lets suppose we need to sum up marks of 5 subjects of a student using by using array sum)
    
*/
#include<stdio.h>
#define SIZE 5


int main(){

    int i,sum_of_marks = 0;

    int marks[SIZE]; //Array for storing marks of 5 subject


    //Taking marks of each 5 subjects as input from user
    for(i=0; i<SIZE; i++){
        printf("Enter the marks of subject %d = ",i+1);
        scanf("%d",&marks[i]);
    }

    
    //Adding elements of array 
    for(i=0; i<SIZE; i++){
            sum_of_marks = sum_of_marks + marks[i];
    }


    printf("Sum of marks in 5 subjects = %d\n",sum_of_marks);




    return 0;
}
