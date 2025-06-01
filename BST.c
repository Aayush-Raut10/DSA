#include <stdio.h>
#include <stdlib.h>
// Definition of a BST node
struct Node {
    int data;
    struct Node *left, *right;
};
// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
// Function to insert a node into the BST
struct Node* insert(struct Node* root, int data) {
    // If the tree is empty, create a new node
    if (root == NULL) {
        return newNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    // Loop down to find the leftmost leaf
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}
// Function to delete a node from the BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) {
        return root;
    }
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Case 1: Node has no children (leaf node)
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: Node has one child
        else if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Node has two children
        else {
            struct Node* temp = minValueNode(root->right); // In-order successor
            root->data = temp->data; // Copy the inorder successor's content to this node
            root->right = deleteNode(root->right, temp->data); // Delete the inorder successor
        }
    }
    return root;
}
// Inorder traversal of the BST
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
// Preorder traversal of the BST
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// Postorder traversal of the BST
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    struct Node* root = NULL;
    // Insert values into the BST
    root = insert(root, 25);
    root = insert(root, 35);
    root = insert(root, 10);
    root = insert(root, 7);
    root = insert(root, 15);
    root = insert(root, 28);
    root = insert(root, 40);
    // Perform Inorder Traversal
    printf("Inorder Traversal before deletion: ");
    inorder(root);
    printf("\n");

    // Deleting node 7 (leaf node)
    root = deleteNode(root, 7);
    printf("Inorder Traversal after deleting 7: ");
    inorder(root);
    printf("\n");
    // Deleting node 10 (node with one child)
    root = deleteNode(root, 10);
    printf("Inorder Traversal after deleting 10: ");
    inorder(root);
    printf("\n");
    // Deleting node 25 (root node with two children)
    root = deleteNode(root, 25);
    printf("Inorder Traversal after deleting 25: ");
    inorder(root);
    printf("\n");
    // Perform Preorder Traversal
    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");
    // Perform Postorder Traversal
    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}

