<<<<<<< HEAD
/*Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.*/
#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("%d is the greatest",n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("%d is the greatest",n2);
    }
    else printf("%d is the greatest",n3);
=======
/*Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.*/
#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("%d is the greatest",n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("%d is the greatest",n2);
    }
    else printf("%d is the greatest",n3);
>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}