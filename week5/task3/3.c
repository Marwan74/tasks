/*Write a C code that defines 2 arrays, and sends them to a function that applies scalar
multiplication between the two arrays and returns the result, the main function then will
print the result.*/
#include <stdio.h>
void multiplication(int size,int *a1,int*a2,int *result){
    for (int i =0;i<size;i++){
        result[i]= a1[i] * a2[i];
    }
}
int main(){
    int a1[]={2,3,4,5,6};
    int a2[]={7,8,9,1,2};
    int size = sizeof(a1)/sizeof(a1[0]);
    int result[size];
    multiplication(size,a1,a2,result);
    printf("result after preforming function: \n ");
    for(int i =0;i<size;i++){
        printf("%d ",result[i]);
    }
    return 0;

}