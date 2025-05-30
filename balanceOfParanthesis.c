#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char expression[100];  // Array to store the expression
    
    int top = -1;  // Stack pointer
    
    char stack[100];  // Stack to store opening parentheses
    
    // Take input from the user
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);  // Using fgets to take input, allows spaces
    
    // Remove newline character if it's present at the end of input
    expression[strcspn(expression, "\n")] = '\0';

    // Traverse through the expression
    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        // If the character is an opening bracket, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } 
            
        // If the character is a closing bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            
            // If stack is empty or the top of the stack doesn't match the closing bracket
            if (top == -1) {
                printf("Unbalanced\n");
                return 0;  // Exit early as the expression is unbalanced
            }
            
            char top_element = stack[top--];
            
            // Check for matching opening bracket
            if ((ch == ')' && top_element != '(') || 
                (ch == '}' && top_element != '{') || 
                (ch == ']' && top_element != '[')) {
                printf("Unbalanced\n");
                return 0;  // Exit early as the expression is unbalanced
            }
        }
    }

    // If the stack is empty after processing all characters, it's balanced
    if (top == -1) {
        printf("Balanced\n");
    } else {
        printf("Unbalanced\n");
    }

    return 0;
}

