<<<<<<< HEAD
/*Write a C code containing a function that gets the fibonacci of a given number.*/
#include <stdio.h>
void fibonacci(int range){
    int a =0 , b = 1 , c;
    while(a<=range){
        printf("%d\t",a);
        c = a+b;
        a = b;
        b = c;

    }
   
}
int main(){
    int range;
    printf("enter range of  fibonacci series : ");
    scanf("%d",&range);
    printf("fibonacci series is : \n");
    fibonacci(range);
    return 0 ;

=======
/*Write a C code containing a function that gets the fibonacci of a given number.*/
#include <stdio.h>
void fibonacci(int range){
    int a =0 , b = 1 , c;
    while(a<=range){
        printf("%d\t",a);
        c = a+b;
        a = b;
        b = c;

    }
   
}
int main(){
    int range;
    printf("enter range of  fibonacci series : ");
    scanf("%d",&range);
    printf("fibonacci series is : \n");
    fibonacci(range);
    return 0 ;

>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}