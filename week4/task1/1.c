<<<<<<< HEAD
/*Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.*/
#include <stdio.h>
void ascendingSort(int arr[], int n) {
    int sort;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                sort = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sort;
            }
        }
    }
}

void descendingSort(int arr[], int n) {
    int sort;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                sort = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sort;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    printf("Enter 0 for ascending or 1 for descending: ");
    scanf("%d", &choice);

    if (choice == 0) {
        ascendingSort(arr, n);
        printf("Array sorted in ascending order: ");
    } else if (choice == 1) {
        descendingSort(arr, n);
        printf("Array sorted in descending order: ");
    } else {
        printf("Invalid choice! Please enter 0 or 1.");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

=======
/*Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.*/
#include <stdio.h>
void ascendingSort(int arr[], int n) {
    int sort;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                sort = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sort;
            }
        }
    }
}

void descendingSort(int arr[], int n) {
    int sort;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                sort = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sort;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    printf("Enter 0 for ascending or 1 for descending: ");
    scanf("%d", &choice);

    if (choice == 0) {
        ascendingSort(arr, n);
        printf("Array sorted in ascending order: ");
    } else if (choice == 1) {
        descendingSort(arr, n);
        printf("Array sorted in descending order: ");
    } else {
        printf("Invalid choice! Please enter 0 or 1.");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
