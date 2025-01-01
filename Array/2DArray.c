/*
    This program shows that how can we initialize 2D array and access its elements in C
*/
#include<stdio.h>

int main(){


    int Matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //Accessing elements of 2D array
    printf("Matrix[%d][%d] = %d\n",0,2,Matrix[0][2]); // Output is 3
    printf("Matrix[%d][%d] = %d\n",2,3,Matrix[2][3]); // Output is 12
    printf("Matrix[%d][%d] = %d\n",1,0,Matrix[1][0]); // Output is 5
    

    







    return 0;
}
