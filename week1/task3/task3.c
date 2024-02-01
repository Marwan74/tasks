#include <stdio.h>
int main(){
    float dolars,totalamount;
    printf("enter the amount : ");
    scanf("%f",&dolars);
    totalamount = dolars * 1.05;
    printf("the final amount = $%.2f\n",totalamount);
}