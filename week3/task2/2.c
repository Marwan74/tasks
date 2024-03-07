/*Write a C code swap two global variables through a function.*/
#include <stdio.h>
int num1 = 20;
int num2 = 30;
void swap(){
    int swp = num1;
    num1 = num2;
    num2 = swp;
    
}
int main(){
    printf("berfore swapping : num1 = %d,num2 = %d\n ",num1,num2);
    swap();
    printf("after swapping : num1 = %d,num2 = %d\n ",num1,num2);


}