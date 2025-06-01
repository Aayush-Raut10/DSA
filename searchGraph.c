#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;
typedef struct Queue {
    Node **array;
    int front, rear, size;
} Queue;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Queue* createQueue(int size) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->array = (Node**)malloc(size * sizeof(Node*));
    q->front = q->rear = -1;
    q->size = size;
    return q;
}
void enqueue(Queue* q, Node* node) {
    if (q->rear == q->size - 1) return;
    q->array[++q->rear] = node;
    if (q->front == -1) q->front = 0;
}
Node* dequeue(Queue* q) {
    if (q->front == -1) return NULL;
    Node* temp = q->array[q->front];
    if (q->front == q->rear) q->front = q->rear = -1;
    else q->front++;
    return temp;
}
// BFS Traversal
void BFS(Node* root) {
    if (root == NULL) return;
    Queue* q = createQueue(10); 
    enqueue(q, root);
    while (q->front != -1) {
        Node* current = dequeue(q);
        printf("%d ", current->data);
        if (current->left != NULL) enqueue(q, current->left);
        if (current->right != NULL) enqueue(q, current->right);
    }
    free(q->array);
    free(q);
}
// DFS Traversal
void DFS(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    DFS(root->left);
    DFS(root->right);
}
Node* buildTree() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(5);
    root->left->left = createNode(3);
    root->left->right = createNode(4);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    return root;
}
int main() {
    Node* root = buildTree();
    printf("DFS Traversal: ");
    DFS(root);
    printf("\nBFS Traversal: ");
    BFS(root); 
    printf("\n");
    return 0;
}

