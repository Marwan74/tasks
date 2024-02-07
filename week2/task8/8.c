/*Write a C code to display the multiplication table of a given integer by the userl.*/
#include <stdio.h>
int main(){
    int num;
    printf("enter the number of multiplication table you want: ");
    scanf("%d",&num);
    for(int i =1;i<=12;++i)
    {
        printf("%d * %d = %d \n ",i,num,i*num);
    }
    return 0;
}