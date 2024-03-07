/*Write a C program to input any string from user and find the first occurrence of a given character in the string. 
Example:-
Input string: I love Codeforwin.
Input character to search: o
Output
'o' is found at index 3
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char searchchar;
    int i, index = -1;
    printf("enter your string: ");
    gets(str);
    printf("enter the character you want to search : ");
    scanf("%c", &searchchar);
    for(i=0;i<strlen(str);i++){
        if (str[i]==searchchar){
            index = i;
            break;
        }
    }
    if (index != -1){
        printf(" '%c' is found at index %d\n ",searchchar,index);
    }
    else {
        printf(" '%c' is not found in the string \n",searchchar);
    }
    return 0;
}