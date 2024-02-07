#include <stdio.h>
#include <stdlib.h>

int main()
{
     int grade;
    printf("Enter your grade : ");
    scanf("%d",grade);
    if (grade >= 85 && grade <= 100){
        printf("your grade is Excellant");

    }
    else if (grade >=70 && grade < 85 ){
         printf("your grade is Very Good");
    }
    else if (grade >=60 && grade < 70 ){
         printf("your grade is Good");
    }
     else if (grade >=50 && grade < 60 ){
         printf("your grade is PASSED");
    }
    else {
        printf("FAILED");}
    return 0;

}
