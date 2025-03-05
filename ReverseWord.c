/*

    Program: Reverse of string using stack in C




*/

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 10

char stack[MAX_SIZE];

int top = -1;


void push(char );
char pop();
int getlength(char word[]);
void reverseword(char name[]);


int main(){
  int i;
    char name[10];

    printf("Enter your name: ");
    scanf("%s",name);

    
    printf("%s",name);
    printf("\n \n \n");
    reverseword(name);
    printf("\n");
    

    return 0;
}


void push(char ch){

    if(top == MAX_SIZE -1){
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top] = ch;
    }


}
char pop(){

    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        top--;
    }
    
}

void reverseword(char name[]){

    int i;
    
    for(i=0; name[i] != '\0'; i++){
        push(name[i]); 
    }
    printf("Reverse of %s = ",name);
    for(i=0; name[i] != '\0'; i++){
         
        printf("%c",stack[getlength(name)-i-1]);
    
    }
}

int getlength(char word[]){

    int i,len=0;

    for(i=0; word[i] != '\0'; i++){
        len++;
    }
    
    return len;
}
