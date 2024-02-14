/*Write a C code to ask the user to enter two numbers, then the main function will call a
function named Get_Max that takes the two values entered by the user then returns the
maximum of them.
The main function will print the returned value.*/
#include <stdio.h>
int Get_Max (int num1,int num2){
    int max;
    if (num1 > num2){
        max = num1;
    }
    else {
        max = num2;
    }
    return printf("the maximum number is %d",max);
}

int main(){
    int n1,n2;
    printf("enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    Get_Max(n1,n2);

}