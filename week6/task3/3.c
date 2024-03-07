/*Write a C program to find reverse of a given string using loop. How to find reverse of any given string using loop in C programming.
*/
#include <stdio.h>
#include <string.h>
int main(){
char str[100];
    printf("enter your string: ");
    gets(str);
    printf("your string before reverse : %s\n ",str);
    int length = strlen(str); // to have length of string 
    printf("length of string : %d\n ",(int)length);
    printf("reversed string: ");
    for(int i = length - 1;i>=0;i--){
        printf("%c",str[i]);
    }


    
    return 0;



}
