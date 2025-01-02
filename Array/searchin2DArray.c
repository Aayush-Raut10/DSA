#include<stdio.h>


int main(){

    int i,j;

    int Matrix[3][3] = {{-9,56,3},{7,85,-2},{4,5,8}};

    int target = 85,index1,index2;

    //Search for target elements in an 2D array
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            if(Matrix[i][j] == target){
                index1 = i;
                index2 = j;
                break;
            }
            
        }
        }
    

    printf("Position of targeted element in 2D array = (%d,%d)\n",index1,index2);
   


    return 0;
}

