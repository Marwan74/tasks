/*Write C code to read 10 numbers from the user and find their summation and average.*/
#include <stdio.h>
int main(){
    int nums[10];
    int sum = 0;
    printf("enter 10 numbers: ");
    for(int i =0;i<10;++i)
    {
        printf("no.%d : ",i+1);
        scanf("%d",&nums[i]);
        sum += nums[i];
    }
    float average;
    average = sum/10.0;
    printf("sum of 10 numbers =%d \n ",sum);
    printf("average of 10 numbers = %.2f ",average);




}