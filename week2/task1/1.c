/* salary in a week based on his working hours, hour rate is 50.
The program will ask the user to enter the working hours, then it will print his salary. But if the working hours are less than 40 hours, a 10% deduction will be applied.*/
#include <stdio.h>
int main(){
    int salary,workinghours;
    printf("enter the working hours per week: ");
    scanf("%d",&workinghours);
    if (workinghours<40){
        salary = (50 * workinghours)-(50*workinghours*0.1);
    }
    else {
    salary = workinghours * 50;
    }
    printf("your salary is %d $",salary);
    return 0;
    
   
}

