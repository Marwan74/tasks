/*Write a C code that asks the user to enter the result of 3 x 4, In case the user entered the
correct answer the program will print "Thanks", otherwise the program will print "Try
again" until the user enters the correct answer.*/
#include <stdio.h>
int main(){
    int result;
    printf("enter the result of 3 * 4 = ");
    scanf("%d",&result);
    while(result != 12){
        printf("Try Again\n");
         printf("enter the result of 3 * 4 = ");
        scanf("%d",&result);
    }
    printf("thanks");



}