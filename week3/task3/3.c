/*Write a C code that gets the number of the digits in a given number.*/
#include <stdio.h>
int num_of_digits(int num){
    int count =0;
    while(num != 0){
        num/=10;
        count++;
     }
    return count;
}
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    printf("the number of digits in %d is : %d ",num,num_of_digits(num));

}