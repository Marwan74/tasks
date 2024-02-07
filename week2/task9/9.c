/*Write a C to calculate the factorial of an integer entered by the user using a while loop.*/
#include <stdio.h>
int main(){
    int num , fact = 1, count ;
    printf("enter the number you want its factorial: ");
    scanf("%d",&num);
    count = num;
    while (count != 0){
        fact*=count;
        count--;
    }
    printf("the factorial of %d is %d ",num,fact);
    return 0;
}