#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    if(x%10>5){
        printf("Good\n");
    }
    else {
        printf("Bad\n");
    }

    return 0;
}
