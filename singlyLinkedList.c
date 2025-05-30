#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};
// Function to insert at the beginning
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;  // Point to the current head
    *head = newNode;  // Update head to the new node
    printf("Inserted %d at the beginning\n", value);
}

// Function to insert at the end
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;  // If the list is empty, new node becomes the head
        printf("Inserted %d at the end\n", value);
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;  // Traverse to the last node
    }
    
    temp->next = newNode;  // Set the last node's next to the new node
    printf("Inserted %d at the end\n", value);
}

// Function to insert at a specific position
void insertAtPosition(struct Node** head, int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("Inserted %d at position %d\n", value, position);
        return;
    }
    
    struct Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position is out of bounds.\n");
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d\n", value, position);
}

// Function to delete at the beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;  // Move head to the next node
    free(temp);  // Free the old head
    printf("Deleted the first node\n");
}

// Function to delete at the end
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    if ((*head)->next == NULL) {
        free(*head);  // Only one node, free it
        *head = NULL;
        printf("Deleted the last node\n");
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL && temp->next->next != NULL) {
        temp = temp->next;  // Traverse to second-to-last node
    }
    
    free(temp->next);  // Free the last node
    temp->next = NULL;  // Set second-to-last node's next to NULL
    printf("Deleted the last node\n");
}

// Function to delete at a specific position
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    if (position == 1) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);  // Free the first node
        printf("Deleted the node at position %d\n", position);
        return;
    }
    
    struct Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds.\n");
        return;
    }
    
    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);  // Free the node at the desired position
    printf("Deleted the node at position %d\n", position);
}

// Function to print the list
void printList(struct Node *head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("Current Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to traverse the list
void traverseList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("Traverse and print all nodes in the list: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; // Start with an empty list
    
    printList(head);

    // Insertion at the Beginning
    insertAtBeginning(&head, 104);  // Insert 104
    insertAtBeginning(&head, 103);  // Insert 103
    insertAtBeginning(&head, 102);  // Insert 102
    insertAtBeginning(&head, 101);  // Insert 101
    printList(head);
    printf("\n");

    // Insertion at the End
    insertAtEnd(&head, 106);  // Insert 106
    printList(head);
    printf("\n");

    // Insertion at Position 5
    insertAtPosition(&head, 105, 5);  // Insert 105 at position 5   
    printList(head);
    printf("\n");

    // Deletion at the Beginning
    deleteAtBeginning(&head);  // Delete the first node (101)
    printList(head);
    printf("\n");

    // Deletion at the End
    deleteAtEnd(&head);  // Delete the last node (106)
    printList(head);
    printf("\n");

    // Deletion at Position 3
    deleteAtPosition(&head, 3);  // Delete node at position 3 (104)
    printList(head);
    printf("\n");

    // Traversing the final linked list
    traverseList(head);  // Output: Traverse and print all nodes in the list: 102 103 105

    return 0;
}

