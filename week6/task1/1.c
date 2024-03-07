/*Write a C program to convert string from lowercase to uppercase string using loop. 
*/
#include <stdio.h>
int main(){
  char  str[100];
    printf("enter your string in lowercase : ");
    gets(str);
    for(int i =0;str[i] != '\0';i++){
        if(str[i] >= 'a' && str[i]<='z') {
        str[i] = str[i] - 32;   // converting to uppercase bu subtracting 32 from ASCII value
        }
    }
    printf("Uppercase String: %s\n ",str);
    return 0;
}
