<<<<<<< HEAD
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
=======
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
>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}