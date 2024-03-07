/*Write a program in C to find the second largest element in an array.
The elements of the array entered by the user.*/
#include <stdio.h>
int findSecondLargest(int arr[], int n) {
    int firstLargest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main(){
    int i,n;
     printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int secondLargest = findSecondLargest(arr, n);

    printf("The second largest element in the array is: %d\n", secondLargest);

    return 0;
}