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

}