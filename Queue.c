#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the queue

int Queue[MAX];  // Array to store the queue elements
int front = -1, rear = -1;  

int isEmpty() {
    return front == -1 || front > rear;  // Queue is empty if front is -1 or front > rear
}

void enqueue(int value) {
    if (rear == MAX - 1) {  // Check if the queue is full
        printf("Queue is full!\n");
    } 
    else {
        
        if (front == -1) {
            front = 0;  // If queue is empty, set front to 0
        }
        
        rear++;  // Move rear pointer forward
        Queue[rear] = value;  // Add the element to the queue
        printf("Enqueued: %d\n", value);
    }
}

int dequeue() {
    
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return -1;  // Return -1 if the queue is empty
    }
    else {
        int value = Queue[front];
        
        if (front == rear) {
            front = rear = -1;  
        } 
        else {
            front++;  
        return value;
    }
 }
}

int getFront() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    return Queue[front];
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue : ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", Queue[i]);  
        }
        printf("\n");
    }
}

int main() {
    int value, choice;
    char continueChoice;

    do {
        printf("Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Get Front Element\n");
        printf("5. IsEmpty\n");  
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            
            case 1:
                
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value); 
                break;
            
            case 2:
                
                printf("Dequeued: %d\n", dequeue());  
                break;
            
            case 3:
                
                displayQueue();  
                break;
            
            case 4:
                
                printf("Front element: %d\n", getFront());  
                break;
            
            case 5:
                
                if (isEmpty()) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            
            case 6:
                
                printf("Exiting the program.\n");
                exit(0);  // Exit the program
            
            default:
                printf("Invalid choice!\n");
        }
        
        printf("Continue? (y/n): ");
        getchar();
        scanf("%c", &continueChoice);
        
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

