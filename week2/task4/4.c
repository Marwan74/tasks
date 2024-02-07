/*Write a C code that asks the user to enter his grade and the program will print his rating.
(Excellent, very good,...,etc). %-based system*/
#include <stdio.h>
int main(){
   int grade;
   printf("Enter your grade  ");
   scanf(" %d",&grade);
   if(grade<=100 && grade>=85)
   {
    printf("Excellent");
   }else if(grade<85 && grade>=70)
   {
    printf("very good");
   }else if(grade<70 && grade>=50)
   {
    printf("good");
   }else if(grade<50)
   {
    printf("fail");
   }
    return 0;

    


}