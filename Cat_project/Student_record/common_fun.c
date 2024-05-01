#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"common_fun.h"
#include"student.h"
#include"Admin.h"
enum {false,true};

int begin()
{
     printf("\n\n");
    printf("\n\t\t\t        *************************************");
    printf("\n\t\t\t        *               WELCOME             *");
    printf("\n\t\t\t        *                  TO               *");
    printf("\n\t\t\t        *            Student Record         *");
    printf("\n\t\t\t        *              MANAGEMENT           *");
    printf("\n\t\t\t        *                SYSTEM             *");
    printf("\n\t\t\t        *************************************");
    printf("\n\n");

//printf("___________ Student Record System ___________");
    printf("\n\t\t\t        **********\n");
    printf("\n\nChoose your mode : \n");
    printf("\n\t\t\t       1- Admin mode \n");
    printf("\n\t\t\t       2- Student mode \n");
    char choose[10];
    do
    {
    printf("\n\t\t\t       your choose : \n\n");
    fgets(choose,sizeof(choose),stdin);
    choose[strlen(choose)-1]='\0';
    //scanf(" %c",&choose);
    if(strcmp(choose,"1")&&strcmp(choose,"2"))printf("\n\n\n\t\t       XXXXX Wrong number .. Try again :(XXXXX\n\n");
    else break;
    }while(strcmp(choose,"1")&&strcmp(choose,"2"));

    return atoi(choose);
}


int check(struct student_info *ptr,int id)
{
    if( ptr == NULL )
    {
        printf("\n\t\t\t        There isn't exist any student :(\n\n");
        return 0;
    }
    int i = 1;
    while(ptr!=NULL)
    {
        if(ptr->id == id )
        {
            return i;
        }else
        {
            ptr = ptr->link;
            i++;
        }
    }
    return false;
}

void view_student_record(struct student_info *ptr)
{
    if(ptr == NULL)
    {
        printf("\n\t\t\t        There isn't exist any student :(\n\n");
        return;
    }
     char string_id[20];
            int id,ch;
             printf("\n\t\t        Enter id: ");
             printf("\n\t\t        ");
             getchar();
            fgets(string_id,sizeof(string_id),stdin);
            string_id[strlen(string_id)-1]='\0';
            if(check_string(string_id)){
                id = atoi(string_id);
                ch = check(ptr,id);

            }
            else {
                printf("\n\t\t     ID should be integer ");
                ch = -1;
            }
   if(ch > 0)
   {
    while(ptr!=NULL)
    {
        if(ptr->id == id )
        {
            break;
        }else
        {
            ptr = ptr->link;
        }
    }

     printf("\n\t\t\t        ***********\n");
    printf("\n\t\t\t        For student : %s\n",ptr->name);
    printf("\n\t\t\t        Password : %s\n",ptr->pass);
    printf("\n\t\t\t        Age : %d\n",ptr->age);
    printf("\n\t\t\t        Total grade : %d\n",ptr->grade);
   }else
   {
       printf("\n\n\t\t\t        There isn't exist any student with this ID :(\n\n");
       return;
   }

}

void save_data(struct student_info *ptr)
{
    FILE *f_ptr = fopen("input.txt","w");
    if(f_ptr==NULL)
    {
        printf("\n\n\n\t\t\t        XXXXX can’t open the file (: XXXXX\n\n\n");
        return;
    }

    while(ptr!=NULL)
    {
        fprintf(f_ptr,"%s,%s,%d,%d,%s,%d\n",ptr->name,ptr->pass,ptr->id,ptr->age,ptr->gender,ptr->grade);
        ptr = ptr->link;
    }
    fclose(f_ptr);
    printf("\nDone saving\n");
}


void tofree(struct student_info **head) {
    struct student_info *current = *head;
    struct student_info *next;

    while (current != NULL) {
        next = current->link;
        free(current);
        current = next;
    }


    *head = NULL;
}
