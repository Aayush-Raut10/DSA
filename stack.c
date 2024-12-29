/*
A simple program to implement Stack using array in C
Author->Aayush Raut

*/

#include<stdio.h>
#define MAX_SIZE 8
int Stack[MAX_SIZE];
int top = -1;

void Push(int x){
    Stack[++top] = x;
}
void display_Stack(){
    int i;
    printf("Stack: ");
    for(i=0; i<=top; i++){
        printf("%d ",Stack[i]);
    }
    printf("\n");

}

int main(){
    Push(12);
    Push(2);
    Push(3);
    display_Stack();
    Push(1);
    Push(85);
    Push(32);
    display_Stack();
    


    return 0;
}