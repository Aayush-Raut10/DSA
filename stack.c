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

void Pop(){
    printf("Poped element is %d\n",Stack[top]);
    top = top - 1;
}


void IsFull(){

    if(top == MAX_SIZE - 1){
        printf("Stack is full\n");
    }
    else{
        printf("Stack has space\n");
    }

}

void IsEmpty(){

    if(top == -1){
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }

    printf("\n");
    
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

    int choice;

    do{
        printf("\nYou can perform following operation on the stack:\n");
        printf("1. Push into stack\n");
        printf("2. Pop from stack\n");
        printf("3. Display the elements of stack\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        int a;

        switch(choice){

            case 1:
                   
                    printf("Enter the elements that you want to push on the stack: ");
                    scanf("%d",&a);
                    Push(a);
                    break;
            
            case 2: 
                    Pop();
                    break;

            case 3: 
                    display_Stack();
                    break;
            
            case 4:
                    IsEmpty();
                    break;


            case 5:
                    IsFull();
                    break;


        }

    }while(choice != 6);

  


    return 0;
}
