// Bubble Sort Algorithm: Write a program in C that implements the bubble sort algorithm to sort a list of integers in ascending order.
//  Ensure the program is menu-driven and allows users to input their list of numbers.
 #include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[50], n, i, choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enter array and sort\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter total number of elements (max 50): ");
                scanf("%d", &n);
                if (n > 50) {
                    printf("Number of elements exceeds the maximum limit of 50.\n");
                    break;
                }
                printf("Enter %d elements in array:\n", n);
                for (i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                bubbleSort(arr, n);

                printf("Elements sorted successfully!\n");
                printf("Sorted list in ascending order:\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}