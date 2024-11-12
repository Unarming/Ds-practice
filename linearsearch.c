// Linear search Algorithm: Develop a program in C that implements a linear search algorithm to find a specified integer in an array. 
// The program should be menu-driven and allow users to input the array and the number they are searching for.

#include <stdio.h>

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main() {
    int n, x, i, choice;
    int arr[100]; // Assuming a maximum size of 100 for the array

    while (1) {
        printf("\nMenu:\n");
        printf("1. Input array\n");
        printf("2. Search for an element\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of elements in array: ");
                scanf("%d", &n);
                printf("Enter %d elements: ", n);
                for (i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Enter element to search: ");
                scanf("%d", &x);
                int result = search(arr, n, x);
                if (result == -1)
                    printf("Element is not present in array\n");
                else
                    printf("Element is present at index: %d\n", result);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
