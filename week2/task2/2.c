/*Write a C code that asks the user to enter a number and check if it is an Even or Odd.*/
#include <stdio.h>
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    if (num != 0 && num % 2 == 0){
        printf("%d is even ",num);
    }
    else if(num != 0 && num%2 != 0 ) {
        printf("%d is odd ",num);
    }
    else printf("the number is zero ");


}