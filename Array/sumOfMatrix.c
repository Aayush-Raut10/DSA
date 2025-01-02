#include<stdio.h>
#define M 3
#define N 3

int main(){

    int A[M][N], B[M][N],C[M][N];
    int i,j;

    printf("Enter elements of first matrix: \n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("Enter a%d%d = ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter elements of second matrix: \n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("Enter a%d%d = ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }

    //Adding two matrices
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Displaying sum of two matrices
    printf("\nSum of two matrices: \n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("%d ",C[i][j]);
            
         }
         printf("\n");
    }



    return 0;
}