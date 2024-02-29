/*Write a C code that asks the user to enter 2 values and save them in two variables, then
the program sends these variables by address to a function that returns the summation
of them. The program then prints the result.*/
#include <stdio.h>
int summation(int *x,int *y){
    return *x + *y;
}
int main(){
    int a,b;
    printf("enter two values: ");
    scanf("%d %d",&a,&b);
   int sum = summation(&a,&b);
   printf("the sum of %d and %d  is: %d",a,b,sum);
   return 0;
}