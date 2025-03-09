#include<stdio.h>

int calcfactorial(int n){

    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * calcfactorial(n-1);
    }
    
}

int main(){

    int num;
    printf("Enter any positive number: ");
    scanf("%d",&num);

    printf("factorial of %d = %d\n",num,calcfactorial(num));

    return 0;
}