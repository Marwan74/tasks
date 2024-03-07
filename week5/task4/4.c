/*Write a C code that defines a function which takes an array as input argument and apply
the bubble sorting algorithm on it, then prints the result.*/
#include <stdio.h>
void sorting (int size,int*a){
    for(int i =0;i<size-1;i++){
        for (int j =0;j<size - i -1;j++){
            if(*(a+j)> *(a+j+1)){
                int temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
}
int main(){
    int a []={50,60,10,11,90,8};
    int size = sizeof(a)/sizeof(a[0]);
    sorting (size,a);
    printf("Sorted array: \n");
    for(int i =0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}