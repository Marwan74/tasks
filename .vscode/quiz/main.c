#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   char str[100];
    char searchChar;
    int i, index = -1;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf("%c", &searchChar);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("'%c' is found at index %d\n", searchChar, index);
    } else {
        printf("'%c' is not found in the string\n", searchChar);
    }

    return 0;

}



