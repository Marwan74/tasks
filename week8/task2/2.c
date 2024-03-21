/*Write a C code to manage a class of 10 students. Each student studies 4 subjects
Programming, Data Structures, Discrete Math and Algorithms.
First define an array of 10 elements and assign random grades for students. The system
will ask the user to enter the student ID then the system will show its grades. The
software shall manage wrong IDs and enable admins to manipulate the grades of the
students.*/
#include <stdio.h>
typedef struct student{
int id;
struct {
    int grade;
}programming,data,math,algorithm;
}s;
int main()
{
    int ref,num,admin=1044;
  s student[10];
student[0].id=1007; student[0].programming.grade=120; student[0].data.grade=90; student[0].math.grade=100; student[0].algorithm.grade= 85; 
student[1].id=1008; student[1].programming.grade=130; student[1].data.grade=90; student[1].math.grade=69; student[1].algorithm.grade=90;
student[2].id=1009; student[2].programming.grade=143; student[2].data.grade=100; student[2].math.grade=77; student[2].algorithm.grade=78;
student[3].id=1010; student[3].programming.grade=117; student[3].data.grade=98; student[3].math.grade=100; student[3].algorithm.grade=99;
student[4].id=1011; student[4].programming.grade=145; student[4].data.grade=65; student[4].math.grade=85; student[4].algorithm.grade=97;
student[5].id=1012; student[5].programming.grade=145; student[5].data.grade=70; student[5].math.grade=74; student[5].algorithm.grade=98;
student[6].id=1013; student[6].programming.grade=110; student[6].data.grade=90; student[6].math.grade=73; student[6].algorithm.grade=85;
student[7].id=1014; student[7].programming.grade=150; student[7].data.grade=65; student[7].math.grade=71; student[7].algorithm.grade=100;
student[8].id=1015; student[8].programming.grade=142; student[8].data.grade=8; student[8].math.grade=45; student[8].algorithm.grade=65;
student[9].id=1016; student[9].programming.grade=137; student[9].data.grade=94; student[9].math.grade=66; student[9].algorithm.grade=73;
printf("Enter your Id : ");
scanf("%d",&ref);
printf("*******************\n");
for(int i=0;i<10;i++)
{
    if(ref==student[i].id)
    {
        printf("Programming : %d\n",student[i].programming.grade);
        printf("Data Structures : %d\n",student[i].data.grade);
        printf("Discrete Math : %d\n",student[i].math.grade);
        printf("Algorithms : %d\n",student[i].algorithm.grade);
        break;

    }else{
        printf("Wrong Id ,try admin Id and student number  ");
        scanf("%d %d",&ref,&num);
         if(ref==admin)
    {
        printf("Programming : %d\n",student[num-1].programming.grade);
        printf("Data Structures : %d\n",student[num-1].data.grade);
        printf("Discrete Math : %d\n",student[num-1].math.grade);
        printf("Algorithms : %d\n",student[num-1].algorithm.grade);
        break;
    }
    }
}
    return 0;

}