#include"student.h"
#include"Admin.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include"common_fun.h"

int check_string(char * str){
    for(int i =0;i<strlen(str);i++){
        if(str[i] >='0' && str[i]<= '9'){
            continue;
        }
        else return 0;
    }
    return 1;


}


enum {false,true};
char default_pass[MAX_PASSWORD_SIZE] ="1234";

static char *pass_admin;
static int size_of_student = 0;


void add_default_adminpass_infile()
{
    FILE *f =fopen("admin_pass.txt","r");
    if(f!=NULL)
    {
        fscanf(f,"Admin_pass : %s",default_pass);
        fclose(f);
    }else
    {
        FILE *f_p = fopen("admin_pass.txt","w");

    if(f_p == NULL)
    {
         printf("\n\n\n\t\t\t        XXXXX can’t open the file (: XXXXX\n\n\n");

    }else
    {
    fprintf(f_p,"Admin_pass : %s","1234");
    fclose(f_p);
    }
    }


}

int login ()
{
    FILE *f_ptr = fopen("admin_pass.txt","r");
    if(f_ptr == NULL)
    {
        printf("\n\n\n\t\t\t        XXXXX can’t open the file (: XXXXX\n\n\n");

    }else
    {
    fscanf(f_ptr,"Admin_pass : %s",default_pass);
    fclose(f_ptr);
    }

  char pass [MAX_PASSWORD_SIZE];

int check = 0;
printf("\n\nHi admin \n");
    while(check != 3)
    {
     printf("\n\t\t\t        Enter admin password\n");
        printf("\n\t\t\t        ");
    int i = 0 ;
     //getchar();
     fgets(pass,sizeof(pass),stdin);
     pass[strlen(pass)-1]='\0';
     pass_admin = (char *)malloc(strlen(pass)+1);
     strcpy(pass_admin,pass);
     printf("%s ",pass_admin);
     if(strcmp(pass_admin,default_pass) != 0)
     {
         if(check<3)
          printf("\n\t\t\t        password is incorrect  \n");
         check++;
         free(pass_admin);
         pass_admin=NULL;
     }else{
         printf("\n\n_____________:) Welcome in our project :) ______________ \n\n");
     return true;
     }
    }
    printf("Try again in later time :(");
    return false ;
}




void add_student(struct student_info **head)
{

    struct student_info *ptr = *head;
    if(*head == NULL)
    {
        *head = (struct student_info *)malloc(sizeof(struct student_info));
        (*head)->link = NULL;
        ptr = *head;

    }else
    {

     struct student_info *current = (struct student_info *)malloc(sizeof(struct student_info));
     current->link = NULL;

     while(ptr->link!=NULL)ptr = ptr->link;

        ptr->link = current;

     ptr = current;
    }
    char name[MAX_NAME_SIZE];
        printf("\n\t\t\t        Enter name of student: ");
        fflush(stdin);
        fgets(name,MAX_NAME_SIZE,stdin);
        name[strlen(name)-1]='\0';
        ptr->name = (char *)malloc(strlen(name)+1);
        strcpy(ptr->name,name);

        char password[MAX_PASSWORD_SIZE];
        do
        {
        printf("\n\t\t\t        Enter  password (consist of 10 character for maximam ) : ");
        fgets(password,MAX_PASSWORD_SIZE,stdin);
        if(strlen(password)>11)
        {
            printf("\n\t\t\t       Don't exceed about 10 character :(\n");
        }
        }while(strlen(password)>MAX_PASSWORD_SIZE);
        password[strlen(password)-1]='\0';
        ptr->pass = (char *)malloc(strlen(password)+1);
        strcpy(ptr->pass,password);

        int ch = 0;
        do
        {
            char string_id[20];
            int id;
             printf("\n\t\t        Enter id: ");
             printf("\n\t\t        ");
            fgets(string_id,sizeof(string_id),stdin);
            string_id[strlen(string_id)-1]='\0';
            if(check_string(string_id)){
                id = atoi(string_id);
                ch = check(*head,id);
                if (ch!=0)
            {
                printf("\n\n\n\t\t\t        XXXXX This ID %d already exist .. Try again XXXXX\n\n\n:(\n",ptr->id);
            }else ptr->id =id;

            }
            else {
                printf("\n\t\t     ID should be integer ");
                ch = 1;
            }

        }while(ch!=0);

        do
        {
         printf("\n\t\t\t        Enter gender of student : ");
        scanf("%7s",ptr->gender);
        if(strcmp(ptr->gender,"male") && strcmp(ptr->gender,"female"))
        {
            printf("\n\t\t\t       nwrong in your writing , Try again\n\n\n");
        }
        }while(strcmp(ptr->gender,"male") && strcmp(ptr->gender,"female"));

        printf("\n\t\t\t      enter age of student : ");
        printf("\n\t\t\t        ");
        scanf("%d",&(ptr->age));

        do
        {
            printf("\n\t\t\t        enter total grade of student: ");
            printf("\n\t\t\t        ");
            scanf("%d",&(ptr->grade));
            if(ptr->grade>MAX_GRADE||ptr->grade<MIN_GRADE)
            {
                printf("\n\n\t\t\t        xxxxxxxxxxx Wrong grade , Try again xxxxxxxxxxx\n\n\n:(\n");
            }
        }while(ptr->grade>MAX_GRADE||ptr->grade<MIN_GRADE);


    size_of_student++;
}




void remove_student(struct student_info **head)
{

    if(size_of_student == 0)
    {
        printf("\n\n\t\t\t   There is no student To remove \n\n\n");
    return;
    }

    struct student_info *current = (*head);
    struct student_info *ptr = NULL;

    int id;
    printf("\n\t\t        Enter id: ");
    printf("\n\t\t        ");
    scanf("%d",&id);
   int ch = check(*head,id);
   if(ch > 0)
   {
    while(current!=NULL)
    {
        if(current->id == id)
        {
            if(ch==1)
            {
                (*head) = current->link;

            }else
            {
               (ptr)->link = current->link ;
            }

            current->id = -1e5;
            free(current);
            current = NULL;
            break;
        }else
        {
            ptr = current;
            current = current->link;
        }
    }
   }else
   {
       printf("\n\n\t\t\t   There isn't exist any student with this ID :(\n\n\n");
       return;
   }
    size_of_student--;
     printf("\n\t\t\t         Removing Done Successfully\n");
}



void ViewAllRecords(struct student_info *head){
   struct student_info* current = head;
    if (current == NULL) {
         printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        THERE IS NO STUDENTS TO VIEW\n\n");
    } else {

        while (current!= NULL) {
             printf("\n\t\t        *********\n");
            printf("\n\t\t        Stud name is: %s \n",current->name);
             printf("\n\t\t        Stud age is: %d \n",current->age);
            printf("\n\t\t        Stud ID is: %d \n",current->id);
            printf("\n\t\t        Stud total grade is: %d\n",current->grade);
            printf("\n\t\t        Stud gender is: %s \n",current->gender);
            printf("\n\t\t        **********\n");
            current = current->link;
        }
    }
}

    void EditAdminPassword(struct student_info **head)
{
    char newpass[MAX_PASSWORD_SIZE] ;
     printf("\n\t\t        Please enter your new password :\n");
    printf("\n\t\t        ");
    scanf("%s", newpass);
  pass_admin = (char*)malloc(strlen(newpass)+1);
  strcpy(pass_admin,newpass);

  FILE *f_p = fopen("admin_pass.txt","w");
    if(f_p == NULL)
    {
        printf("\n\n\n\t\t\t        XXXXX can’t open the file (: XXXXX\n\n\n");
        return;
    }
    fprintf(f_p,"Admin_pass : %s",pass_admin);
    fclose(f_p);
    free(pass_admin);
    pass_admin = NULL;
     printf("\n\t\t       your password have changed successfully! \n");


}

void Editstudentgrade(struct student_info **head){
    int ID;
     int newGrade;
     printf("\n\n\t\t\t       Enter student ID: \n");
    scanf("%d",&ID );
    printf("\n\n\n\t\t\t        enter grade between 0 and 100\n\n");
    scanf("%d", &newGrade);

    struct student_info* current = *head;
    while(current != NULL) {
        if (current->id == ID) {

            if (newGrade >= 0 && newGrade <= 100) {
                current->grade = newGrade;
                printf("\n\n\t\t\t       Grade for student with ID %d has been updated to %d\n", ID, newGrade);
                return;
            } else {
                printf("\n\n\n\t\t\t        XXXXX Error: Grade should be between 0 and 100. XXXXX\n\n\n");
                return;
            }
        }
        current = current->link;
    }
    printf("\n\n\t\t\t      Student with ID %d not found.\n\n", ID);
}

void admin(struct student_info **head){


        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        [1]To Add Student Record \n");
        printf("\n\t\t\t        [2]To Remove Student Record \n");
        printf("\n\t\t\t        [3]To View Student Record \n");
        printf("\n\t\t\t        [4]To View All Records \n");
        printf("\n\t\t\t        [5]To Edit Admin Password \n");
        printf("\n\t\t\t        [6]To Edit Student Grade \n");
        printf("\n\t\t\t        [7]To Save data in file.txt \n");
        printf("\n\t\t\t        [8]To Quit  \n");
        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        choose from 1:8\n");
        printf("\n\t\t\t        ");
        int achoice;
        scanf("%d", &achoice);
        switch(achoice){
        case 1:
            add_student(head);

            break;
        case 2:
            remove_student(head);
            break;
        case 3:
            view_student_record(*head);
            printf("\n\n\t\t\t     Press any key to continue...\n");
            getchar();
            getchar();
            break;
        case 4:
            ViewAllRecords(*head);
            printf("\n\n\t\t\t     Press any key to continue...\n");
            getchar();
            getchar();
            break;
        case 5:
            EditAdminPassword(head);
            break;
        case 6:
            Editstudentgrade(head);
            break;
        case 7:
           save_data(*head);
           printf("\n\n\t\t\t     Press any key to continue...\n");
            getchar();
            getchar();
           break;
        case 8:
            tofree(head);
            printf("\n\t\t\t      Thanks for using our program :)\n");
          return;
        default :
            printf("\n\n\t\t\t     Wrong Number :(\n");
        }
  admin(head);
    }
