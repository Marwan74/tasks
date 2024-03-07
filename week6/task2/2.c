/*Write a C program to count total number of alphabets, digits or special characters in a string using loop.*/
#include <stdio.h>
int main(){
    char p[100];
    int i, alphapets =0,digits=0,special=0;
    printf("enter your string : ");
    gets(p);
    for(i =0; p[i] != '\0';i++){
         if ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z')) {
            alphapets++;
        } else if (p[i] >= '0' && p[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }
    printf("total number of alphapets is : %d\n ",alphapets);
    printf("total number of digits is : %d\n ",digits);
    printf("total number of special characters is : %d\n ",special);
    return 0;

    

}