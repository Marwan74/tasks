#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    // arthemtic operators
    printf("sum = %d\n", num1 + num2);
    printf("subtract = %d\n", num1 - num2);
    printf("multiply = %d\n", num1 * num2);
    printf("division = %d\n", num1 / num2);
    // logical operators 
    printf("logical And :  %d\n",num1 && num2);
     printf("logical OR :  %d\n",num1 || num2);
      printf("logical Not for num1 :  %d\n",!num1);
       printf("logical Not for num2 :  %d\n",!num2);
       // bitwise operators
       printf("bitwise And :  %d\n",num1 & num2);
       printf("bitwise OR :  %d\n",num1 | num2);
       printf("bitwise XOR :  %d\n",num1 ^ num2);
       printf("bitwise Not for num1 :  %d\n",~num1);
       printf("bitwise Not for num2 :  %d\n",~num2);

     

}