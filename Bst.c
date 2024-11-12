// Design, Develop and Implement a menu driven Program in C for the following operations on Binary Search
// Tree (BST) of Integers
// a. Create a BST of N Integers
// a. Traverse the BST in Inorder
// b. Traverse the BST in Preorder
// c. Traverse the BST in and Post Order

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;  
    struct Node *right; 
};

struct Node* createNode(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct Node* insertElement(struct Node* root, int x) {
    if (root == NULL) {
        struct Node* temp = createNode(x);
        return temp;
    }
    if (root->data >= x) {
        root->left = insertElement(root->left, x);
    } else {
        root->right = insertElement(root->right, x);
    }
    return root;
}

void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Inorder traversal\n");
        printf("3. Preorder traversal\n");
        printf("4. Postorder traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                root = insertElement(root, value);
                break;
            case 2:
                printf("Inorder traversal:\n");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder traversal:\n");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal:\n");
                postorder(root);
                printf("\n");
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}