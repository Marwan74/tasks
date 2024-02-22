/*Write a program in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
Ex:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6*/
#include <stdio.h>
int main(){
    int i,n,unique,j;
     printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Unique Elements in the given array are: \n");
    for(i = 0; i < n; i++) {
        unique = 1;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if(unique) {
            printf("%d ", arr[i]);
        }
    }
    
}
