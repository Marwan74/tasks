<<<<<<< HEAD
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


=======
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


>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}