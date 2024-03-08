<<<<<<< HEAD
/*Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)*/
#include <stdio.h>
int main(){
     int n;
   printf("Enter the height of a pyramid  ");
   scanf("%d", &n);
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j <=n+(i-1))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
   }
    return 0;
=======
/*Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)*/
#include <stdio.h>
int main(){
     int n;
   printf("Enter the height of a pyramid  ");
   scanf("%d", &n);
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=2*n-1;j++)
    {
        if(j>=n-(i-1) && j <=n+(i-1))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
   }
    return 0;
>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}