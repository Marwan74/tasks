/*Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.*/
#include <stdio.h>
int findrepeat(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int j =i+1;j <n;j++){
            if (arr[i]==arr[j])
            return arr[i];
        }
    }
    return -1;

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
    int repeat = findrepeat(arr,n);
    if(repeat!= -1){
        printf("the repeating number is : %d",repeat);
    }
    else printf("no repeating numbers in array ");
    
    return 0;
}